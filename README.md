# VoidBoard

<img width="865" height="682" alt="Screenshot 2026-06-10 125101" src="https://github.com/user-attachments/assets/2ec39daa-48dc-41a0-ba99-e630e746f10b" />

Image of Casing

<img width="1130" height="707" alt="Screenshot 2026-06-10 163523" src="https://github.com/user-attachments/assets/c95e0ad2-08af-49e2-80cc-7e04293336fb" alt="VoidBoard"/>

Image of VoidBoard Design

<img width="1033" height="443" alt="Screenshot 2026-06-10 164113" src="https://github.com/user-attachments/assets/21ad631c-fb4f-46de-9a19-3b431445b223" />

Image of VoidBoard Schematic

<img width="925" height="811" alt="image" src="https://github.com/user-attachments/assets/58fc6e0d-d3c4-4388-8be3-5e7a9e1fde21" />


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

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
