#!/bin/bash
# create multiresolution windows icon
ICON_SRC=../../src/qt/res/icons/cockcoin.png
ICON_DST=../../src/qt/res/icons/cockcoin.ico
convert ${ICON_SRC} -resize 16x16 cockcoin-16.png
convert ${ICON_SRC} -resize 32x32 cockcoin-32.png
convert ${ICON_SRC} -resize 48x48 cockcoin-48.png
convert cockcoin-16.png cockcoin-32.png cockcoin-48.png ${ICON_DST}

