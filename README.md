audacious-usf-plugin
====================

The USF plugin (N64) for audacious

# About the plugin

The plugin was removed sometime in 2012 (i think) from the [audacious-plugins](https://github.com/audacious-media-player/audacious-plugins) repo. 

Then lucashpandolfo forked and restored the plugin (https://github.com/lucashpandolfo/audacious-plugins).

It was further forked and made compatible with Audacious 3.8 onwards by Sascha Klick in 2018 (https://github.com/saschaklick/audacious-usf-plugin).

In 2025 it was fixed again to work with Audacious 4.3.2 by switching to CPU interpreter instead of recompiler.

# Compatibility

The plugin uses an out-dated Project 64 core. A simple drop-in replacement of a newer version of the core is not feasible, but still possible.

Games that did not work with the core in the mid-2000s will not have their USFs play in the plugin. *Conker's Bad Fur Day* is such a candiate, *Blast Corps* might be too.

There are newer USF sets marked `[fixed]`. These actually do not work with the plugin and produce garbled and sped-up audio. The non-fixed versions of the sets work though.

# Installation

```bash
> ./autogen.sh
> ./configure
> make
> sudo make install
```
