# Cycle8_Unchained
I created this project to unchain the Cycle 8 keyboard from its ..uhm.. *misplaced* bootloader &amp; firmware. Long live FREE &amp; OPEN SOURCE!

# Background story
The TKD / Vertex Cycle 8 is a fantastic keyboard. It truly is. Looks, sounds and works amazingly, save for one "tiny little" detail. Neither its misplaced* QMK firmware, nor its misplaced* UF2BOOT firmware is available anywhere. "Misplaced", because QMK is licensed under GPL which clearly states that it has to remain open source, but even the UF2BOOT's ISC license requires maintaning copyright. None of this was done by TKD, or better said Eason, who's the maintainer of this keyboard "officially". This is not right, so I set out to replace both with truly open source and free roots of both projects.

# Stuff in use
## QMK
Of course I am using QMK. Specifically, I'm utilizing the VIAL fork. Huge thanks to everyone @VIAL and @QMK. Please never stop these amazing projects!

## UF2BOOT 
I updated & modified [mmoskal/uf2-stm32f103](mmoskal/uf2-stm32f103) to be QMK compatible and to be actually buildable. All credits due to him to make this even possible though!

# How to unchain the Cycle 8 with these?
## Backup
*Always* create a full dump / backup of your current flash contents via ST-LINK!

## Precompiled binaries / firmwares
If you trust me enough to use my pre-compiled binaries / firmwares, you can find them at the releases page of this project. _(They are just compiled versions of the current state of this whole project, nothing less, nothing more. That was the whole point, after all)_

## QMK
### Build
Just clone the official vial-qmk repo, replace `keyboards/vertex/cycle8` with this project's corresponding _(wired_soldered, wired_hotswap, trimode)_ `qmk/cycle8` directory and build as usual (`make vertex/cycle8:vial`).
* wired & soldered version should be perfectly fine, as that's the only one they actually shared "officially"..
* wired & hot-swap definitely works - that's the one I'm using
* someone leaked the trimode parts, so I included. Thanks a lot to @dqdb for providing it for me! Please note, neither of us have tri-mode and thus it's untested. It should work and it's highly unlikely to cause any irreversible damage as it's just a "soft firmware" and if you're here you're probably looking into replacing the bootloader too anyway, so.. 
### Flash
Flash as usually with UF2BOOT

## UF2BOOT
### Build
To build, go into `uf2boot/src` and do `make TARGET=BLUEPILL V=1`. It kinda sometimes maybe perhaps builds by any chance. You'll probably need to hack some paths in the Makefiles that I have hardcoded for now, to at least get it to build.
### Flash
To flash this, you'll need an ST-LINK programmer. They're quite cheap and accessible. Next you'll want to take a look at the underside of the pcb. Orientate it in a way that the spacebar is facing North, face down. In this orientation, on the very right edge of the board you'll notice 4 unsoldered pins named `U4`. That's an ST-LINK port. In this orientation _(the STM chip should be North-West from the U4 port if you're holding it right)_, the pinout is the following, starting for the uppermost:<br>
*1: VSS / GND<br>
*2: SWCLK<br>
*3: SWDIO<br>
*4 VDD / +3.3v<br>
Connect these up to your ST-LINK programmer's corresponding ports. The PCB should otherwise be unconnected to anything else. *DO NOT* power your PCB with both the USB port and the ST-LINK. Only ever connect one and the other, and pay close attention to the pinout. You can fry the chip if you mess up.<br>
Using at ST-LINK programmer, for example STM32CubeProgrammer, connect using ST-LINK and write the compiled bootloader at start address `0x08000000` _(default)_.

## First boot
After flashing the bootloader, you may reassemble the board. At first connection, a UF2 drive will show up. Simply copy _(as normally)_ the compiled QMK firmware. At this point you should have a working keyboard. If you'd ever need to flash again, you can enter the bootloader as normally: unplug, hold escape, replug.

## Unchained
At this point you should also have a fully working, compliant, free & open source bootloader + firmware on your Cycle 8. Enjoy it! :]
