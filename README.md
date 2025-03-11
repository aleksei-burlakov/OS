## Usage :-<br/>

**Compile the source:**
```
	$ zypper in make nasm gcc grub2 mtools xorriso # to compile
	$ zypper in qemu # to start

	$ make
```

**Open created ISO in QEMU:**
```
	$ qemu-system-x86_64 out/VESA_VBE20.iso
```
or
```
	$ qemu-system-i386 out/VESA_VBE20.iso
```
**Clean the code:**
```
	$ make clean
```

<br/>

### Mode Info:-
<br/>
<img src="https://raw.githubusercontent.com/pritamzope/OS/master/NEW%20KERNEL/VESA%20VBE/kernel_vbe_mode_info_1.png"/>
<br/>
<img src="https://raw.githubusercontent.com/pritamzope/OS/master/NEW%20KERNEL/VESA%20VBE/kernel_vbe_mode_info_2.png"/>
<br/>
<img src="https://raw.githubusercontent.com/pritamzope/OS/master/NEW%20KERNEL/VESA%20VBE/kernel_vbe_mode_info_3.png"/>
<br/>
<img src="https://raw.githubusercontent.com/pritamzope/OS/master/NEW%20KERNEL/VESA%20VBE/kernel_vbe_mode_info_4.png"/>
<br/>

### Graphics:-
<br/>
<img src="https://raw.githubusercontent.com/pritamzope/OS/master/NEW%20KERNEL/VESA%20VBE/kernel_vbe_graphics.png"/>

