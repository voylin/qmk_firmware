# Instructions I guess
- Clean QMK: `qmk clean`
- First compile: `qmk compile -kb lily58/rev1 -km voylin`;
- Then flash each half: `qmk flash -kb lily58/rev1 -km voylin`

## Flashing
Press the RESET button twice on the pcb.

## Notes
Maybe we can just use the flash command without compiling?
If keymaps aren't updating, unplug keyboard, hold Escape and plug back in.
