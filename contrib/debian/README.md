
Debian
====================
This directory contains files used to package tenocoind/tenocoin-qt
for Debian-based Linux systems. If you compile tenocoind/tenocoin-qt yourself, there are some useful files here.

## tenocoin: URI support ##


tenocoin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install tenocoin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your tenocoin-qt binary to `/usr/bin`
and the `../../share/pixmaps/tenocoin128.png` to `/usr/share/pixmaps`

tenocoin-qt.protocol (KDE)

