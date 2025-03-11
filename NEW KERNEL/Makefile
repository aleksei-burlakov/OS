.PHONY: all

all: console gdt idt tss keyboard terminal timer mouse fpu memory_info physical_memory_manager kheap paging ata bios vga vesa bitmap

console:
	$(MAKE) -C Console

gdt:	
	$(MAKE) -C GDT

idt:
	$(MAKE) -C IDT

tss:
	$(MAKE) -C TSS

keyboard:
	$(MAKE) -C Keyboard

terminal:
	$(MAKE) -C Terminal

timer:
	$(MAKE) -C Timer

mouse:
	$(MAKE) -C Mouse

fpu:
	$(MAKE) -C FPU

memory_info:
	$(MAKE) -C Memory\ Info

physical_memory_manager:
	$(MAKE) -C Physical\ Memory\ Manager

kheap:
	$(MAKE) -C KHeap

paging:
	$(MAKE) -C Paging

ata:
	$(MAKE) -C ATA

bios:
	$(MAKE) -C BIOS32

vga:
	$(MAKE) -C VGA

vesa:
	$(MAKE) -C VESA\ VBE

bitmap:
	$(MAKE) -C Bitmap\ Text

run:
	qemu-system-x86_64 -s -cdrom "VESA VBE/out/VESA_VBE20.iso" -m 1024

clean:
	$(MAKE) -C Console clean
	$(MAKE) -C GDT clean
	$(MAKE) -C IDT clean
	$(MAKE) -C TSS clean
	$(MAKE) -C Keyboard clean
	$(MAKE) -C Terminal clean
	$(MAKE) -C Timer clean
	$(MAKE) -C Mouse clean
	$(MAKE) -C FPU clean
	$(MAKE) -C Memory\ Info clean
	$(MAKE) -C Physical\ Memory\ Manager clean
	$(MAKE) -C KHeap clean
	$(MAKE) -C Paging clean
	$(MAKE) -C ATA clean
	$(MAKE) -C BIOS32 clean
	$(MAKE) -C VGA clean
	$(MAKE) -C VESA\ VBE clean
	$(MAKE) -C Bitmap\ Text clean
