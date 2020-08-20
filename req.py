from requests import post, get

corpus = "example"
server = "http://localhost:8888/blacklab-server/{}-index/hits".format(corpus)

req = post(server, data={
	"patt": '[lemma="pedic.*"]',
	"wordsaroundhit": 5,
	"usecontent": "fi", # Slower but better for my purposes
	"outputformat": "json",
	"prettyprint": True
	})

resp = req.json()

_keys = ("ref", "lemma", "pos", "msd", )

def build(hits, keys=_keys, ana=""):
	refs, ref_type, data = [], [], []
	for token in zip(*hits.values()):
		token = dict(zip(hits.keys(), token))
		refs.append(token["ref"])
		ref_type.append(token["in"])
		data.append(
			"<w "+ana+" ".join(
				["{}=\"{}\"".format(k, token[k]) for k in keys]
			)+">"+token["word"]+"</w>"
		)
	return refs, ref_type, data

for hit in resp["hits"]:
	data = []
	refs = []
	ref_type = []
	doc = hit["docPid"]
	r, t, d = build(hit["left"])
	refs.extend(r), ref_type.extend(t), data.extend(d)
	r, t, d = build(hit["match"], ana=' ana="true" ')
	refs.extend(r), ref_type.extend(t), data.extend(d)
	r, t, d = build(hit["right"])
	refs.extend(r), ref_type.extend(t), data.extend(d)

	print(
		"""<div type="textpart" n="{tid}:{sid}" subtype="{ref_type}">\n    <ab>\n        {words}\n    </ab>\n</div>""".format(
			words="\n        ".join(data).replace('"""', "'\"'"),
			tid=resp["docInfos"][doc]["docId"][0],
			sid="-".join([refs[0], refs[-1]]),
			ref_type=ref_type[0]
		).replace("    ", "  ")
	)

doc = False
if doc:
	corpus = "test-corpus"
	server = "http://localhost:8888/blacklab-server/{}-index/hits".format(corpus)

	req = get("http://localhost:8888/blacklab-server/{}-index/docs/0".format(corpus), params={
		"outputformat": "xml",
		"prettyprint": True
		})
	print(req.text)