	.file	"main.c"
	.section	.rodata
	.align 4
.LC0:
	.string	"\nWelcome to Calculator Demo !!!"
.LC1:
	.string	"1. Add two numbers."
.LC2:
	.string	"2. Subtract two numbers."
.LC3:
	.string	"3. Multiply two numbers."
.LC4:
	.string	"4. Divide two numbers."
.LC5:
	.string	"5. Exit."
.LC6:
	.string	"Enter your choice:-"
.LC7:
	.string	"%d"
	.text
	.globl	Menu
	.type	Menu, @function
Menu:
.LFB0:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	$.LC0, (%esp)
	call	puts
	movl	$.LC1, (%esp)
	call	puts
	movl	$.LC2, (%esp)
	call	puts
	movl	$.LC3, (%esp)
	call	puts
	movl	$.LC4, (%esp)
	call	puts
	movl	$.LC5, (%esp)
	call	puts
	movl	$.LC6, %eax
	movl	%eax, (%esp)
	call	printf
	movl	$.LC7, %eax
	leal	-12(%ebp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	__isoc99_scanf
	movl	-12(%ebp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	Menu, .-Menu
	.section	.rodata
.LC8:
	.string	"\nEnter 2 numbers to add:-"
.LC9:
	.string	"%d %d"
	.align 4
.LC10:
	.string	"\n Result of Addition of 2 numbers is:- %d"
	.align 4
.LC11:
	.string	"\n Result of Subtraction of 2 numbers is:- %d"
	.align 4
.LC12:
	.string	"\n Result of Multiplication of 2 numbers is:- %d"
	.align 4
.LC13:
	.string	"\n Result of Division of 2 numbers is:- %d"
.LC14:
	.string	"\n Enter Valid Choice !!!"
	.text
	.globl	SimulateCalculator
	.type	SimulateCalculator, @function
SimulateCalculator:
.LFB1:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
.L11:
	call	Menu
	cmpl	$5, %eax
	ja	.L3
	movl	.L9(,%eax,4), %eax
	jmp	*%eax
	.section	.rodata
	.align 4
	.align 4
.L9:
	.long	.L3
	.long	.L4
	.long	.L5
	.long	.L6
	.long	.L7
	.long	.L8
	.text
.L4:
	movl	$.LC8, %eax
	movl	%eax, (%esp)
	call	printf
	movl	$.LC9, %eax
	leal	-12(%ebp), %edx
	movl	%edx, 8(%esp)
	leal	-16(%ebp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	__isoc99_scanf
	movl	-12(%ebp), %edx
	movl	-16(%ebp), %eax
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	Add
	movl	$.LC10, %edx
	movl	%eax, 4(%esp)
	movl	%edx, (%esp)
	call	printf
	jmp	.L10
.L5:
	movl	$.LC8, %eax
	movl	%eax, (%esp)
	call	printf
	movl	$.LC9, %eax
	leal	-16(%ebp), %edx
	movl	%edx, 8(%esp)
	leal	-12(%ebp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	__isoc99_scanf
	movl	-16(%ebp), %edx
	movl	-12(%ebp), %eax
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	Subtract
	movl	$.LC11, %edx
	movl	%eax, 4(%esp)
	movl	%edx, (%esp)
	call	printf
	jmp	.L10
.L6:
	movl	$.LC8, %eax
	movl	%eax, (%esp)
	call	printf
	movl	$.LC9, %eax
	leal	-12(%ebp), %edx
	movl	%edx, 8(%esp)
	leal	-16(%ebp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	__isoc99_scanf
	movl	-12(%ebp), %edx
	movl	-16(%ebp), %eax
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	Multiply
	movl	$.LC12, %edx
	movl	%eax, 4(%esp)
	movl	%edx, (%esp)
	call	printf
	jmp	.L10
.L7:
	movl	$.LC8, %eax
	movl	%eax, (%esp)
	call	printf
	movl	$.LC9, %eax
	leal	-16(%ebp), %edx
	movl	%edx, 8(%esp)
	leal	-12(%ebp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	__isoc99_scanf
	movl	-16(%ebp), %edx
	movl	-12(%ebp), %eax
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	Divide
	movl	$.LC13, %edx
	movl	%eax, 4(%esp)
	movl	%edx, (%esp)
	call	printf
	jmp	.L10
.L8:
	movl	$0, (%esp)
	call	exit
.L3:
	movl	$.LC14, %eax
	movl	%eax, (%esp)
	call	printf
	nop
.L10:
	jmp	.L11
	.cfi_endproc
.LFE1:
	.size	SimulateCalculator, .-SimulateCalculator
	.globl	main
	.type	main, @function
main:
.LFB2:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	call	SimulateCalculator
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE2:
	.size	main, .-main
	.ident	"GCC: (Ubuntu/Linaro 4.6.3-1ubuntu5) 4.6.3"
	.section	.note.GNU-stack,"",@progbits
