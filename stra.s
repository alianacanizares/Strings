	.arch armv8-a
	.file	"stra.c"
	.text
	.section	.rodata
	.align	3
.LC0:
	.string	"stra.c"
	.align	3
.LC1:
	.string	"pcSrc != NULL"
	.text
	.align	2
	.global	Str_getLength
	.type	Str_getLength, %function
Str_getLength:
.LFB0:
	.cfi_startproc
	stp	x29, x30, [sp, -48]!
	.cfi_def_cfa_offset 48
	.cfi_offset 29, -48
	.cfi_offset 30, -40
	mov	x29, sp
	str	x0, [sp, 24]
	str	xzr, [sp, 40]
	ldr	x0, [sp, 24]
	cmp	x0, 0
	bne	.L3
	adrp	x0, __PRETTY_FUNCTION__.3
	add	x3, x0, :lo12:__PRETTY_FUNCTION__.3
	mov	w2, 7
	adrp	x0, .LC0
	add	x1, x0, :lo12:.LC0
	adrp	x0, .LC1
	add	x0, x0, :lo12:.LC1
	bl	__assert_fail
.L4:
	ldr	x0, [sp, 40]
	add	x0, x0, 1
	str	x0, [sp, 40]
.L3:
	ldr	x1, [sp, 24]
	ldr	x0, [sp, 40]
	add	x0, x1, x0
	ldrb	w0, [x0]
	cmp	w0, 0
	bne	.L4
	ldr	x0, [sp, 40]
	ldp	x29, x30, [sp], 48
	.cfi_restore 30
	.cfi_restore 29
	.cfi_def_cfa_offset 0
	ret
	.cfi_endproc
.LFE0:
	.size	Str_getLength, .-Str_getLength
	.section	.rodata
	.align	3
.LC2:
	.string	"pcDst != NULL && pcSrc != NULL"
	.text
	.align	2
	.global	Str_copy
	.type	Str_copy, %function
Str_copy:
.LFB1:
	.cfi_startproc
	stp	x29, x30, [sp, -48]!
	.cfi_def_cfa_offset 48
	.cfi_offset 29, -48
	.cfi_offset 30, -40
	mov	x29, sp
	str	x0, [sp, 24]
	str	x1, [sp, 16]
	ldr	x0, [sp, 16]
	bl	Str_getLength
	str	x0, [sp, 32]
	ldr	x0, [sp, 24]
	cmp	x0, 0
	beq	.L7
	ldr	x0, [sp, 16]
	cmp	x0, 0
	bne	.L8
.L7:
	adrp	x0, __PRETTY_FUNCTION__.2
	add	x3, x0, :lo12:__PRETTY_FUNCTION__.2
	mov	w2, 16
	adrp	x0, .LC0
	add	x1, x0, :lo12:.LC0
	adrp	x0, .LC2
	add	x0, x0, :lo12:.LC2
	bl	__assert_fail
.L8:
	str	xzr, [sp, 40]
	b	.L9
.L10:
	ldr	x1, [sp, 16]
	ldr	x0, [sp, 40]
	add	x1, x1, x0
	ldr	x2, [sp, 24]
	ldr	x0, [sp, 40]
	add	x0, x2, x0
	ldrb	w1, [x1]
	strb	w1, [x0]
	ldr	x0, [sp, 40]
	add	x0, x0, 1
	str	x0, [sp, 40]
.L9:
	ldr	x0, [sp, 32]
	add	x0, x0, 1
	ldr	x1, [sp, 40]
	cmp	x1, x0
	bcc	.L10
	ldr	x0, [sp, 24]
	ldp	x29, x30, [sp], 48
	.cfi_restore 30
	.cfi_restore 29
	.cfi_def_cfa_offset 0
	ret
	.cfi_endproc
.LFE1:
	.size	Str_copy, .-Str_copy
	.align	2
	.global	Str_concat
	.type	Str_concat, %function
Str_concat:
.LFB2:
	.cfi_startproc
	stp	x29, x30, [sp, -64]!
	.cfi_def_cfa_offset 64
	.cfi_offset 29, -64
	.cfi_offset 30, -56
	mov	x29, sp
	str	x0, [sp, 24]
	str	x1, [sp, 16]
	ldr	x0, [sp, 16]
	bl	Str_getLength
	str	x0, [sp, 48]
	ldr	x0, [sp, 24]
	bl	Str_getLength
	str	x0, [sp, 40]
	ldr	x0, [sp, 24]
	cmp	x0, 0
	beq	.L13
	ldr	x0, [sp, 16]
	cmp	x0, 0
	bne	.L14
.L13:
	adrp	x0, __PRETTY_FUNCTION__.1
	add	x3, x0, :lo12:__PRETTY_FUNCTION__.1
	mov	w2, 28
	adrp	x0, .LC0
	add	x1, x0, :lo12:.LC0
	adrp	x0, .LC2
	add	x0, x0, :lo12:.LC2
	bl	__assert_fail
.L14:
	str	xzr, [sp, 56]
	b	.L15
.L16:
	ldr	x1, [sp, 16]
	ldr	x0, [sp, 56]
	add	x1, x1, x0
	ldr	x2, [sp, 40]
	ldr	x0, [sp, 56]
	add	x0, x2, x0
	ldr	x2, [sp, 24]
	add	x0, x2, x0
	ldrb	w1, [x1]
	strb	w1, [x0]
	ldr	x0, [sp, 56]
	add	x0, x0, 1
	str	x0, [sp, 56]
.L15:
	ldr	x1, [sp, 56]
	ldr	x0, [sp, 48]
	cmp	x1, x0
	bcc	.L16
	ldr	x1, [sp, 40]
	ldr	x0, [sp, 48]
	add	x0, x1, x0
	ldr	x1, [sp, 24]
	add	x0, x1, x0
	strb	wzr, [x0]
	ldr	x0, [sp, 24]
	ldp	x29, x30, [sp], 64
	.cfi_restore 30
	.cfi_restore 29
	.cfi_def_cfa_offset 0
	ret
	.cfi_endproc
.LFE2:
	.size	Str_concat, .-Str_concat
	.align	2
	.global	Str_compare
	.type	Str_compare, %function
Str_compare:
.LFB3:
	.cfi_startproc
	stp	x29, x30, [sp, -48]!
	.cfi_def_cfa_offset 48
	.cfi_offset 29, -48
	.cfi_offset 30, -40
	mov	x29, sp
	str	x0, [sp, 24]
	str	x1, [sp, 16]
	str	xzr, [sp, 40]
	ldr	x0, [sp, 16]
	cmp	x0, 0
	beq	.L19
	ldr	x0, [sp, 24]
	cmp	x0, 0
	bne	.L21
.L19:
	adrp	x0, __PRETTY_FUNCTION__.0
	add	x3, x0, :lo12:__PRETTY_FUNCTION__.0
	mov	w2, 38
	adrp	x0, .LC0
	add	x1, x0, :lo12:.LC0
	adrp	x0, .LC2
	add	x0, x0, :lo12:.LC2
	bl	__assert_fail
.L26:
	ldr	x1, [sp, 24]
	ldr	x0, [sp, 40]
	add	x0, x1, x0
	ldrb	w1, [x0]
	ldr	x2, [sp, 16]
	ldr	x0, [sp, 40]
	add	x0, x2, x0
	ldrb	w0, [x0]
	cmp	w1, w0
	bcs	.L22
	mov	w0, -1
	b	.L23
.L22:
	ldr	x1, [sp, 24]
	ldr	x0, [sp, 40]
	add	x0, x1, x0
	ldrb	w1, [x0]
	ldr	x2, [sp, 16]
	ldr	x0, [sp, 40]
	add	x0, x2, x0
	ldrb	w0, [x0]
	cmp	w1, w0
	bls	.L24
	mov	w0, 1
	b	.L23
.L24:
	ldr	x0, [sp, 40]
	add	x0, x0, 1
	str	x0, [sp, 40]
.L21:
	ldr	x1, [sp, 24]
	ldr	x0, [sp, 40]
	add	x0, x1, x0
	ldrb	w0, [x0]
	cmp	w0, 0
	beq	.L25
	ldr	x1, [sp, 16]
	ldr	x0, [sp, 40]
	add	x0, x1, x0
	ldrb	w0, [x0]
	cmp	w0, 0
	bne	.L26
.L25:
	ldr	x1, [sp, 24]
	ldr	x0, [sp, 40]
	add	x0, x1, x0
	ldrb	w1, [x0]
	ldr	x2, [sp, 16]
	ldr	x0, [sp, 40]
	add	x0, x2, x0
	ldrb	w0, [x0]
	cmp	w1, w0
	bne	.L27
	mov	w0, 0
	b	.L23
.L27:
	ldr	x1, [sp, 24]
	ldr	x0, [sp, 40]
	add	x0, x1, x0
	ldrb	w1, [x0]
	ldr	x2, [sp, 16]
	ldr	x0, [sp, 40]
	add	x0, x2, x0
	ldrb	w0, [x0]
	cmp	w1, w0
	bcs	.L28
	mov	w0, -1
	b	.L23
.L28:
	mov	w0, 1
.L23:
	ldp	x29, x30, [sp], 48
	.cfi_restore 30
	.cfi_restore 29
	.cfi_def_cfa_offset 0
	ret
	.cfi_endproc
.LFE3:
	.size	Str_compare, .-Str_compare
	.section	.rodata
	.align	3
	.type	__PRETTY_FUNCTION__.3, %object
	.size	__PRETTY_FUNCTION__.3, 14
__PRETTY_FUNCTION__.3:
	.string	"Str_getLength"
	.align	3
	.type	__PRETTY_FUNCTION__.2, %object
	.size	__PRETTY_FUNCTION__.2, 9
__PRETTY_FUNCTION__.2:
	.string	"Str_copy"
	.align	3
	.type	__PRETTY_FUNCTION__.1, %object
	.size	__PRETTY_FUNCTION__.1, 11
__PRETTY_FUNCTION__.1:
	.string	"Str_concat"
	.align	3
	.type	__PRETTY_FUNCTION__.0, %object
	.size	__PRETTY_FUNCTION__.0, 12
__PRETTY_FUNCTION__.0:
	.string	"Str_compare"
	.ident	"GCC: (GNU) 11.5.0 20240719 (Red Hat 11.5.0-11)"
	.section	.note.GNU-stack,"",@progbits
