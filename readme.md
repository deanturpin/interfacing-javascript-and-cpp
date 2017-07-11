Compile the code
```bash
clang++ -Weverything -std=c++1y -Wc++98-c++11-compat-pedantic -Wno-c++98-compat -o cgi-bin/serve.cgi serve.cpp
```

Create python CGI server, needs to be called out of cgi-bin
```bash
cd ..
python -m CGIHTTPServer
```
