# Zombies and Demons - Vietnam - Arma 3 Mod
<a rel="license" href="https://www.bohemia.net/community/licenses/arma-public-license-share-alike" target="_blank" ><img src="https://data.bistudio.com/images/license/APL-SA.png" ><br>This work is licensed under the Public License Share Alike</a>

> **Important note**: This mod should contain no content from the original Zombies and Demons mod, whose license is set by the original mod author.

Extends [Ryan's Zombies and Demons mod](https://steamcommunity.com/sharedfiles/filedetails/?id=501966277) for Arma 3 to support the S.O.G. Prairie Fire CDLC.

This adds zombie variants (Walker, Slow, Medium, Fast, Spider, Crawler, Player-controlled) for all S.O.G. Prairie Fire units.

These zombies should behave identically to Ryan's zombies (except where "No brain" zombies are used, see below).

> **Important note**: A small number of units are intentionally omitted out of respect for the real-life veterans involved in with S.O.G. Prairie Fire. Please do not re-add them.

## Installation

Download the mod directly from the Steam Workshop: https://steamcommunity.com/sharedfiles/filedetails/?id=3592239718

### Building the mod locally

1. Install the [Hemtt](https://github.com/BrettMayson/HEMTT) build tool for Arma 3.
2. Download this Git Repository
3. Run `hemtt build`
4. Copy the folder `.hemttout/build` to your Arma 3 folder, named `@ZombiesAndDemonsVietnam` (or whatever you so choose)

## How do I use this mod?

This adds zombie variants of every unit in the S.O.G. Prairie Fire CDLC.

The zombie variants for each unit are identical to their CDLC classnames, but with one of the following postfixes:

- `_zombie_walker`
- `_zombie_slow`
- `_zombie_slow2`
- `_zombie_medium`
- `_zombie_fast`
- `_zombie_spider`
- `_zombie_crawler`
- `_zombie_player` (Player-controllable)

There is also a "No brain" variant for every zombie type that doesn't run any scripts (either Ryan's zombie brain or player-zombie init script), allowing for completely custom scripting. 

These have a `_nobrain` postfix. For example: `vn_b_men_seal_48_zombie_walker_nobrain`,  `vn_b_men_seal_48_zombie_player_nobrain`.
