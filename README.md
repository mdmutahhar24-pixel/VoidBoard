# VoidBoard

<img width="1130" height="707" alt="Screenshot 2026-06-10 163523" src="https://github.com/user-attachments/assets/c95e0ad2-08af-49e2-80cc-7e04293336fb" alt="VoidBoard"/>



A macropad with 9 keys, 128x32 OLED, a rotary encoder. Based off the game: Hollow Knight.

* Keyboard Maintainer: [Mutahhar Sulgan](https://github.com/mdmutahhar24-pixel)
* Hardware Supported: *The PCBs, controllers supported*
* Hardware Availability: *Links to where you can find this hardware*

Make example for this keyboard (after setting up your build environment):

    make voidboard:default

Flashing example for this keyboard:

    make voidboard:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
