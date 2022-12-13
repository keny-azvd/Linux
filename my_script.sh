#!/bin/sh
# quietly add a user without password
adduser --quiet --disabled-password --shell /bin/bash --home /home/kenner --gecos "User" kenner
# set password
echo "kenner:123" | chpasswd