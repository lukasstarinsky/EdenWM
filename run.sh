#!/bin/bash

set -e

Xephyr :69 -ac -screen 1280x960 &
DISPLAY=:69 ./bin/Debug/EdenWM &
DISPLAY=:69 xclock &
DISPLAY=:69 xterm &

#sudo killall Xephyr