# cpp-wasm-app

### initial setup:
1. Wait for the background setup (`postCreateCommand`) to finish downloading the Arduino IDE.
2. In the **Ports** tab at the bottom, ensure Port **6080** is set to **Public**.
---
### reopening a codespace:
If the desktop stream isn't running automatically, start it from your terminal:
```bash
docker start librewolf-vnc 2>/dev/null || docker run -d --restart always --name librewolf-vnc -p 6080:3000 -e CUSTOM_PORT=3000 -v /home/vscode/.librewolf-data:/config -v /home/vscode:/config/Desktop/workspace lscr.io/linuxserver/librewolf:latest
```
---
### Arduino:
Inside the LibreWolf desktop stream terminal, run this command:
```bash
/config/Desktop/workspace/arduino-ide.AppImage --no-sandbox --appimage-extract-and-run
```
