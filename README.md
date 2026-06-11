# VoidBoard

<img width="865" height="682" alt="Screenshot 2026-06-10 125101" src="https://github.com/user-attachments/assets/2ec39daa-48dc-41a0-ba99-e630e746f10b" />

Image of Casing

<img width="1130" height="707" alt="Screenshot 2026-06-10 163523" src="https://github.com/user-attachments/assets/c95e0ad2-08af-49e2-80cc-7e04293336fb" alt="VoidBoard"/>

Image of VoidBoard Design

<img width="1033" height="443" alt="Screenshot 2026-06-10 164113" src="https://github.com/user-attachments/assets/21ad631c-fb4f-46de-9a19-3b431445b223" />

Image of VoidBoard Schematic

<img width="935" height="792" alt="Screenshot 2026-06-10 164153" src="https://github.com/user-attachments/assets/e3ef0f64-aa36-4662-abf5-de5cdc02d56e" />

Image of VoidBoard PCB

Description: A macropad with 9 keys, 128x32 OLED, a rotary encoder. Based off the game: Hollow Knight.

Materials List:

| Part Item | Quantity |
|-----------|----------|
|Seeed XIAO RP2040 microcontroller| 1 |
|1N4148 through-hole diodes| 9 |
|MX-style mechanical switches| 9 |
|EC11 rotary encoders (20mm D-shaft)| 1 |
|0.91” 128×32 OLED display| 1 |
|Blank DSA keycaps| 9 |
|M3×16mm screws| 6 |
|M3×5×4mm heatset inserts| 6 |

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
