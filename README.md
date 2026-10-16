# cpp-wasm-app

Run these setup commands:

```bash
mkdir -p ~/.firefox-data
docker rm -f firefox-vnc 2>/dev/null
docker run -d --restart always --name firefox-vnc -p 6080:3000 -e CUSTOM_PORT=3000 -v /home/vscode/.firefox-data:/config lscr.io/linuxserver/firefox:latest
```
then just make sure that the port is public
