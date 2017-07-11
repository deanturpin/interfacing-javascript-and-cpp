Create ad-hoc web-server using netcat
```bash
> while :; do cat http-response.txt message.json | nc -l 8000; sleep .5; done
GET /get.html HTTP/1.1
Host: 0.0.0.0:8000
Connection: keep-alive
Cache-Control: max-age=0
Upgrade-Insecure-Requests: 1
User-Agent: Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like
Gecko) Chrome/55.0.2883.87 Safari/537.36
Accept:
text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,*/*;q=0.8
Accept-Encoding: gzip, deflate, sdch
Accept-Language: en-GB,en-US;q=0.8,en;q=0.6
If-Modified-Since: Tue, 11 Jul 2017 10:13:13 GMT
```
Connect with web browser: http://0.0.0.0:8000/get.html
```
{ "firstName": "John", "lastName": "Smith", "isAlive": true, "age": 25 }
```
