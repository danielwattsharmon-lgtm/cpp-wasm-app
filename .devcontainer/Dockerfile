# Use a pinned LTS base image to prevent apt-get mirror resolution failures
FROM mcr.microsoft.com/devcontainers/base:ubuntu-22.04

# Avoid interactive prompts during build
ENV DEBIAN_FRONTEND=noninteractive

# Install essential build tools and dependencies
RUN apt-get update && apt-get install -y --no-install-recommends \
    build-essential \
    cmake \
    git \
    curl \
    ca-certificates \
    python3 \
    && apt-get clean \
    && rm -rf /var/lib/apt/lists/*

# Set default user
USER vscode