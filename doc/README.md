Stardust Core 0.13.99
=====================

Setup
---------------------
[Stardust Core](http://stardust.org/en/download) is the original Stardust client and it builds the backbone of the network. However, it downloads and stores the entire history of Stardust transactions (which is currently several GBs); depending on the speed of your computer and network connection, the synchronization process can take anywhere from a few hours to a day or more.

Running
---------------------
The following are some helpful notes on how to run Stardust on your native platform.

### Unix

Unpack the files into a directory and run:

- `bin/stardust-qt` (GUI) or
- `bin/stardustd` (headless)

### Windows

Unpack the files into a directory, and then run stardust-qt.exe.

### OS X

Drag Stardust-Core to your applications folder, and then run Stardust-Core.

### Need Help?

* See the documentation at the [Stardust Wiki](https://en.stardust.it/wiki/Main_Page)
for help and more information.
* Ask for help on [#stardust](http://webchat.freenode.net?channels=stardust) on Freenode. If you don't have an IRC client use [webchat here](http://webchat.freenode.net?channels=stardust).
* Ask for help on the [StardustTalk](https://stardusttalk.org/) forums, in the [Technical Support board](https://stardusttalk.org/index.php?board=4.0).

Building
---------------------
The following are developer notes on how to build Stardust on your native platform. They are not complete guides, but include notes on the necessary libraries, compile flags, etc.

- [OS X Build Notes](build-osx.md)
- [Unix Build Notes](build-unix.md)
- [Windows Build Notes](build-windows.md)
- [OpenBSD Build Notes](build-openbsd.md)
- [Gitian Building Guide](gitian-building.md)

Development
---------------------
The Stardust repo's [root README](/README.md) contains relevant information on the development process and automated testing.

- [Developer Notes](developer-notes.md)
- [Multiwallet Qt Development](multiwallet-qt.md)
- [Release Notes](release-notes.md)
- [Release Process](release-process.md)
- [Source Code Documentation (External Link)](https://dev.visucore.com/stardust/doxygen/)
- [Translation Process](translation_process.md)
- [Translation Strings Policy](translation_strings_policy.md)
- [Unit Tests](unit-tests.md)
- [Unauthenticated REST Interface](REST-interface.md)
- [Shared Libraries](shared-libraries.md)
- [BIPS](bips.md)
- [Dnsseed Policy](dnsseed-policy.md)
- [Benchmarking](benchmarking.md)

### Resources
* Discuss on the [StardustTalk](https://stardusttalk.org/) forums, in the [Development & Technical Discussion board](https://stardusttalk.org/index.php?board=6.0).
* Discuss project-specific development on #stardust-core-dev on Freenode. If you don't have an IRC client use [webchat here](http://webchat.freenode.net/?channels=stardust-core-dev).
* Discuss general Stardust development on #stardust-dev on Freenode. If you don't have an IRC client use [webchat here](http://webchat.freenode.net/?channels=stardust-dev).

### Miscellaneous
- [Assets Attribution](assets-attribution.md)
- [Files](files.md)
- [Tor Support](tor.md)
- [Init Scripts (systemd/upstart/openrc)](init.md)

License
---------------------
Distributed under the [MIT software license](http://www.opensource.org/licenses/mit-license.php).
This product includes software developed by the OpenSSL Project for use in the [OpenSSL Toolkit](https://www.openssl.org/). This product includes
cryptographic software written by Eric Young ([eay@cryptsoft.com](mailto:eay@cryptsoft.com)), and UPnP software written by Thomas Bernard.
