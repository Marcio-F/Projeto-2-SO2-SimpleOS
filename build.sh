#!/bin/sh
nasm -f elf32 kernel.asm -o kasm.o
gcc -m32 -c -w kernel.c -o kc.o
ld -m elf_i386 -T link.ld -o ./simple/boot/kernel.bin kasm.o kc.o
# grub-mkrescue -o ./release/simple.iso simple