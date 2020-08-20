Docker Blacklab
===============

This is an unofficial image, I just needed something to get it working easily.

## Requirements

You need docker to run this :)

## How to

First, clone the repository or download it:

```shell
git clone https://github.com/lascivaroma/blacklab-docker.git
```

### Adapt for your corpus

Check [Blacklab documentation](http://inl.github.io/BlackLab), which is real good. Then, you have two places where you can have a look:

- `blacklab/formats/tei-msd.blf.yaml` allows you for adaptation at the indexing level with you TEI
- Add you corpora in new folders under `corpora/`. See `corpora/example`


### Build and run

1. Build with `docker build -t dockerlab .` (calls docker to build the current directory (`.`) and name the image `dockerlab`)
2. Run with `docker run -it --rm -p 8888:8080 dockerlab:latest`: it asks docker to run the image named `dockerlab:latest` in interactive mode (`-i`) with a terminal (`t` in `-ti`), redirect the virtual machine port `8080` which is the one of Tomcat (the server runnnnig Blacklab) to `8888` on your machine (`-p 8888:8080`), while remove the machine after it's killed (`--rm`)
3. You can either go on the server ( http://localhost:8888/blacklab-server ) or the GUI (http://localhost:8888/corpus-frontend ). You can also use exemple requests such as the one in `req.py`