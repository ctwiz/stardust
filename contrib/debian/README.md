
Debian
====================
This directory contains files used to package stardustd/stardust-qt
for Debian-based Linux systems. If you compile stardustd/stardust-qt yourself, there are some useful files here.

## stardust: URI support ##


stardust-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install stardust-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your stardust-qt binary to `/usr/bin`
and the `../../share/pixmaps/stardust128.png` to `/usr/share/pixmaps`

stardust-qt.protocol (KDE)

