# cpp-wasm-app

### initial setup:
1. Wait for the background setup to complete.
2. click on the "Ports" tab and right click the entry then hover over "Port Visibility" and click "Private".
3. then click the globe icon that appears when hovering over the "Forwarded Address" entry.
4. go back to the GitHub codespace tab and run this in the terminal (NOT INSIDE OF THE DESKTOP ENVIROMENT):
```bash
while true; do date; sleep 300; done
```
5. back in the desktop environment tab, click "applications" in the top left and click "terminal emulator"
6. copy this command and paste (CTL+SHIFT+V DO NOT USE CTL+V) it in that terminal window, then hit enter:
```bash
sudo apt-get update && sudo apt-get install -y gnome-software gnome-software-plugin-flatpak
flatpak remote-add --user --if-not-exists flathub https://dl.flathub.org/repo/flathub.flatpakrepo
sudo apt-get update && sudo apt-get upgrade -y && flatpak update -y
```
7. all done! you can close the temrinal window.
---
### how to download and run apps:
1. click the "applications" on the top left of the desktop environment and hover your cursor over the software tab.
2. click "software"
---
### reopening a codespace:
---
### Arduino IDE:
---
### File manager:
---
