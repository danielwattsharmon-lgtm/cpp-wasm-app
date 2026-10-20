FROM mcr.microsoft.com/devcontainers/base:ubuntu

# Pre-install Cinnamon desktop environment during image build
RUN apt-get update && DEBIAN_FRONTEND=noninteractive apt-get install -y \
    cinnamon-desktop-environment \
    lightdm \
    pcmanfm \
    curl \
    && rm -rf /var/lib/apt/lists/*
