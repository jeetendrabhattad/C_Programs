	.file	"test_structure_pointer.c"
	.section	.rodata
.LC0:
	.string	"%d %d %d*******\n"
.LC1:
	.string	" %d %d,%d,%d\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%ebx
	andl	$-16, %esp
	subl	$64, %esp
	movzbl	40(%esp), %eax
	andl	$-4, %eax
	orl	$1, %eax
	movb	%al, 40(%esp)
	movzbl	40(%esp), %eax
	andl	$-61, %eax
	orl	$28, %eax
	movb	%al, 40(%esp)
	movl	$23, 44(%esp)
	movzbl	48(%esp), %eax
	andl	$-16, %eax
	orl	$13, %eax
	movb	%al, 48(%esp)
	movzbl	40(%esp), %eax
	sall	$6, %eax
	sarb	$6, %al
	movsbl	%al, %eax
	movl	%eax, 52(%esp)
	movzbl	40(%esp), %eax
	sall	$2, %eax
	sarb	$4, %al
	movsbl	%al, %eax
	movl	%eax, 56(%esp)
	movzbl	48(%esp), %eax
	sall	$4, %eax
	sarb	$4, %al
	movsbl	%al, %eax
	movl	%eax, 60(%esp)
	movl	$.LC0, %eax
	movl	60(%esp), %edx
	movl	%edx, 12(%esp)
	movl	56(%esp), %edx
	movl	%edx, 8(%esp)
	movl	52(%esp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	.cfi_offset 3, -12
	call	printf
	movzbl	48(%esp), %eax
	sall	$4, %eax
	sarb	$4, %al
	movsbl	%al, %ebx
	movzbl	40(%esp), %eax
	sall	$2, %eax
	sarb	$4, %al
	movsbl	%al, %ecx
	movzbl	40(%esp), %eax
	sall	$6, %eax
	sarb	$6, %al
	movsbl	%al, %edx
	movl	$.LC1, %eax
	movl	%ebx, 16(%esp)
	movl	%ecx, 12(%esp)
	movl	%edx, 8(%esp)
	movl	$12, 4(%esp)
	movl	%eax, (%esp)
	call	printf
	movl	-4(%ebp), %ebx
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	.cfi_restore 3
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu/Linaro 4.6.3-1ubuntu5) 4.6.3"
	.section	.note.GNU-stack,"",@progbits
