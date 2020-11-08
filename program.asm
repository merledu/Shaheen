nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
# trap handler
sw x0, 0x8(x2)
addi x6, x0, 1
sw x6, 0(x2)
lw x7, 0(x2)	
waitForIntrToEnd:
	bne x0, x7, waitForIntrToEnd
add x3,x3,x3
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
# program memory
li x2, 0x00001880
csrrw x3, 0x300, x2
nop
nop
nop
nop
csrrw x4, 0x300, x0
