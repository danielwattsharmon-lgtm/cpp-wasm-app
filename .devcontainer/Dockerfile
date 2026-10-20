FROM mcr.microsoft.com/devcontainers/base:ubuntu-22.04

# Install Cinnamon desktop environment, LibreWolf, LibreOffice, and Thunderbird
RUN apt-get update && DEBIAN_FRONTEND=noninteractive apt-get install -y \
    extrepo \
    cinnamon-desktop-environment \
    lightdm \
    pcmanfm \
    curl \
    thunderbird \
    libreoffice \
    && extrepo enable librewolf \
    && apt-get update \
    && DEBIAN_FRONTEND=noninteractive apt-get install -y librewolf \
    # Only purge unnecessary camera hardware, local file share, and default games
    && apt-get purge -y \
        cheese \
        warpinator \
        hypnotix \
        simple-scan \
        aisleriot \
        mahjongg \
        gnome-mines \
        gnome-sudoku \
    && apt-get autoremove -y \
    && rm -rf /var/lib/apt/lists/*