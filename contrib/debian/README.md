
Debian
====================
This directory contains files used to package cockcoind/cockcoin-qt
for Debian-based Linux systems. If you compile cockcoind/cockcoin-qt yourself, there are some useful files here.

## cockcoin: URI support ##


cockcoin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install cockcoin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your cockcoin-qt binary to `/usr/bin`
and the `../../share/pixmaps/cockcoin128.png` to `/usr/share/pixmaps`

cockcoin-qt.protocol (KDE)

