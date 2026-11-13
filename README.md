# cpp-wasm-app

### initial setup:
1. Wait for the background setup to complete.
2. click on the "Ports" tab and then click the globe icon that appears when hovering over the "Forwarded Address" entry.
4. go back to the GitHub codespace tab and run this in the terminal (NOT INSIDE OF THE DESKTOP ENVIROMENT):
```bash
while true; do date; sleep 300; done
```
5. back in the desktop environment website tab, click "applications" in the top left and click "terminal emulator"
6. copy this command and paste (CTL+SHIFT+V DO NOT USE CTL+V) it in that terminal window (hit yes/ok on the popup for pasting the code), then hit enter:
```bash
sudo apt-get update && sudo apt-get install -y gnome-software gnome-software-plugin-flatpak
flatpak remote-add --user --if-not-exists flathub https://dl.flathub.org/repo/flathub.flatpakrepo
sudo apt-get update && sudo apt-get upgrade -y && flatpak update -y
sudo apt-get update && sudo apt-get install -y libfuse2
sudo ln -sf /var/lib/flatpak/exports/share/applications/*.desktop /config/.local/share/flatpak/exports/share/applications/*.desktop /usr/share/applications/ 2>/dev/null; sudo update-desktop-database /usr/share/applications; dbus-update-activation-environment --all XDG_DATA_DIRS="/var/lib/flatpak/exports/share:/config/.local/share/flatpak/exports/share:/usr/local/share:/usr/share"; gnome-software --quit 2>/dev/null || true
```
7. all done! you can close the temrinal window with the "x" in the upper right hand corner of that window.
---
### reopening a codespace:
1. run this is the codespace terminal (not in the desktop enviorment):
```bash
while true; do date; sleep 300; done
```
2. run this in the terminal emulator in the desktop enviorment:
```bash
sudo ln -sf /var/lib/flatpak/exports/share/applications/*.desktop /config/.local/share/flatpak/exports/share/applications/*.desktop /usr/share/applications/ 2>/dev/null; sudo update-desktop-database /usr/share/applications; dbus-update-activation-environment --all XDG_DATA_DIRS="/var/lib/flatpak/exports/share:/config/.local/share/flatpak/exports/share:/usr/local/share:/usr/share"; gnome-software --quit 2>/dev/null || true
```
---
### how to download and run apps:
1. click the "applications" on the top left of the desktop environment and hover your cursor over the software tab.
2. click "software" (hit "+" to maximize the window)
3. click the magnifying glass on the top left to search for an application
4. after clicking on an application and hitting "Install" click "applications" on the upper left and then "terminal emulator" in the menu
5. paste (CTL+SHIFT+V NOT CTL+V) this command and then hit enter (click yes/ok to any popups):
```bash
sudo ln -sf /var/lib/flatpak/exports/share/applications/*.desktop /config/.local/share/flatpak/exports/share/applications/*.desktop /usr/share/applications/ 2>/dev/null; sudo update-desktop-database /usr/share/applications; dbus-update-activation-environment --all XDG_DATA_DIRS="/var/lib/flatpak/exports/share:/config/.local/share/flatpak/exports/share:/usr/local/share:/usr/share"; gnome-software --quit 2>/dev/null || true
```
---
### Appimages:
1. open file manager and navigate to your appimage (usually it is in downloads)
2. right click your appimage and click "Properties" from the menu
3. click the "Permissions" tab of the properties menu
4. click "Allow this file to run as an executable" and close the Properies menu
6. that's it! you can now double click the file and it will run the application.
---