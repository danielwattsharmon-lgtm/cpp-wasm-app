# cpp-wasm-app

### initial setup:
1. Wait for the background setup to complete.
2. close the librewolf window inside the codespace, and right click. Then hit 'foot' and run the following:
```bash
sudo apt-get update && sudo apt-get install -y pcmanfm
mkdir -p /config/Downloads && cd /config/Downloads
sudo find /config -xdev -exec chown -h $(whoami):$(whoami) {} +
```
If you also want to install Arduino IDE run this
```bash
curl -sSL https://downloads.arduino.cc/arduino-ide/arduino-ide_2.3.10_Linux_64bit.AppImage -o /config/Downloads/arduino-ide_2.3.10_Linux_64bit.AppImage
chmod +x arduino-ide_2.3.10_Linux_64bit.AppImage
./arduino-ide_2.3.10_Linux_64bit.AppImage --appimage-extract
pip install pyserial
```
If you want to unzip files, run this, then unzip files with "unzip /path/to/file.zip"
```bash
sudo apt-get update && sudo apt-get install -y unzip
```
---
### reopening a codespace:
If the desktop stream isn't running automatically, start it from your terminal:
```bash
docker start librewolf-vnc 2>/dev/null || docker run -d --restart always --name librewolf-vnc -p 6080:3000 -e CUSTOM_PORT=3000 -v /home/vscode/.librewolf-data:/config -v /home/vscode:/config/Desktop/workspace lscr.io/linuxserver/librewolf:latest
```
---
### Arduino:
Inside the foot terminal, run this command:
```bash
/config/Downloads/squashfs-root/arduino-ide --no-sandbox
```
---
### File manager:
Inside the foot terminal, run this command:
```bash
pcmanfm
```
