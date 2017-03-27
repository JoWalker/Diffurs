#!/bin/sh

qmake
make -j6
#macdeployqt difa.app
tar -zcvf difa-mac-$1.tar.gz difa.app
