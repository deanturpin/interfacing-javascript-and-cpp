Compile the code
```bash
clang++ -Weverything -std=c++1y -Wno-c++98-compat -o cgi-bin/packet.json
serve.cpp
```

Start python CGI server. It must be served from the cgi-bin folder.
```bash
cd ..
python -m CGIHTTPServer
```

Test it
```bash
curl http://0.0.0.0:8000/cgi-bin/serve.cgi
```

Or in the browser: http://0.0.0.0:8000/get.html

# USP
- UI only knows how to parse JSON and correlate fields.
- Interrogate external web APIs for extra info (news, wiki)

# APIs
- https://github.com/bcl/aisparser
- http://www.aishub.net/nmea-sample.php
