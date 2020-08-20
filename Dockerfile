FROM tomcat:latest
MAINTAINER Thibault Clérice <thibault.clerice@chartes.psl.eu>

ENV BL_VERSION 2.1.0
ENV BLACKLAB_CONFIG_DIR /etc/blacklab

WORKDIR /jars/blacklab

ADD blacklab /etc/blacklab
ADD corpora /data/corpora
ADD blacklab-server-${BL_VERSION}.war ${CATALINA_HOME}/webapps/blacklab-server.war

RUN ls /etc/blacklab

RUN mkdir -p /data/blacklab/indexes && mkdir -p /jars/blacklab

# Completely noob with war and jar, I don't know how to access the lib from the war without unzipping
RUN unzip ${CATALINA_HOME}/webapps/blacklab-server.war -d /jars/blacklab

RUN mv /jars/blacklab/WEB-INF/lib /jars/blacklab &&\
	mv lib/blacklab-${BL_VERSION}.jar ./blacklab.jar && \
	ls .

RUN for corpus in /data/corpora/*; \
	do if [ -d "$corpus" ]; then \
		java -cp "blacklab.jar" nl.inl.blacklab.tools.IndexTool create /data/blacklab/indexes/$(basename $corpus)-index $corpus tei-msd;\
		fi; \
	done

