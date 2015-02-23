#!/bin/bash

avr-gcc -mmcu=atmega328p -Os run.c -o run.o
avr-objcopy -j .text -j .data -O ihex  run.o  run.hex
sudo avrdude -p atmega328p -c usbasp -P usb -U flash:w:run.hex