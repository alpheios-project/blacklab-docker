from requests import post

corpus = "test-corpus"
server = "http://localhost:8888/blacklab-server/{}-index/hits".format(corpus)

req = post(server, data={
	"patt": '[lemma="sum1"]',
	"wordsaroundhit": 30,
	"usecontent": "fi", # Slower but better for my purposes
	"outputformat": "json",
	"prettyprint": True
	})
print(req.text)