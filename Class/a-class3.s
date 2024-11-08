	.file	"class3.cpp"
	.text
.lcomm _ZStL8__ioinit,1,1
	.section .rdata,"dr"
.LC0:
	.ascii "Default Constructor\0"
	.section	.text$_ZN4DemoC1Ev,"x"
	.linkonce discard
	.align 2
	.globl	_ZN4DemoC1Ev
	.def	_ZN4DemoC1Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN4DemoC1Ev
_ZN4DemoC1Ev:
.LFB1842:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rcx
	movq	.refptr._ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_(%rip), %rax
	movq	%rax, %rdx
	call	_ZNSolsEPFRSoS_E
	movq	16(%rbp), %rax
	movl	$1, (%rax)
	movl	$4, %ecx
	call	_Znwy
	movq	%rax, %rdx
	movq	16(%rbp), %rax
	movq	%rdx, 8(%rax)
	movq	16(%rbp), %rax
	movq	8(%rax), %rax
	movl	$1, (%rax)
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC1:
	.ascii "Copy Constructor\0"
	.section	.text$_ZN4DemoC1ERS_,"x"
	.linkonce discard
	.align 2
	.globl	_ZN4DemoC1ERS_
	.def	_ZN4DemoC1ERS_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN4DemoC1ERS_
_ZN4DemoC1ERS_:
.LFB1845:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movl	$4, %ecx
	call	_Znwy
	movq	%rax, %rdx
	movq	16(%rbp), %rax
	movq	%rdx, 8(%rax)
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rcx
	movq	.refptr._ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_(%rip), %rax
	movq	%rax, %rdx
	call	_ZNSolsEPFRSoS_E
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC2:
	.ascii "destructor\0"
	.section	.text$_ZN4DemoD1Ev,"x"
	.linkonce discard
	.align 2
	.globl	_ZN4DemoD1Ev
	.def	_ZN4DemoD1Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN4DemoD1Ev
_ZN4DemoD1Ev:
.LFB1848:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	movq	8(%rax), %rax
	testq	%rax, %rax
	je	.L4
	movl	$4, %edx
	movq	%rax, %rcx
	call	_ZdlPvy
.L4:
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rcx
	movq	.refptr._ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_(%rip), %rax
	movq	%rax, %rdx
	call	_ZNSolsEPFRSoS_E
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.def	__gxx_personality_seh0;	.scl	2;	.type	32;	.endef
	.seh_handler	__gxx_personality_seh0, @unwind, @except
	.seh_handlerdata
.LLSDA1848:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1848-.LLSDACSB1848
.LLSDACSB1848:
.LLSDACSE1848:
	.section	.text$_ZN4DemoD1Ev,"x"
	.linkonce discard
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC3:
	.ascii " \0"
	.align 8
.LC4:
	.ascii "this is the end of the program\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
.LFB1849:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rdi
	.seh_pushreg	%rdi
	pushq	%rsi
	.seh_pushreg	%rsi
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$88, %rsp
	.seh_stackalloc	88
	leaq	80(%rsp), %rbp
	.seh_setframe	%rbp, 80
	.seh_endprologue
	call	__main
	movl	$16, %ecx
.LEHB0:
	call	_Znwy
.LEHE0:
	movq	%rax, %rbx
	movl	$1, %edi
	movq	%rbx, %rcx
.LEHB1:
	call	_ZN4DemoC1Ev
.LEHE1:
	movq	%rbx, -8(%rbp)
	leaq	-32(%rbp), %rax
	movq	%rax, %rcx
.LEHB2:
	call	_ZN4DemoC1Ev
.LEHE2:
	movl	$1, -32(%rbp)
	leaq	-32(%rbp), %rdx
	leaq	-48(%rbp), %rax
	movq	%rax, %rcx
.LEHB3:
	call	_ZN4DemoC1ERS_
.LEHE3:
	movl	$2, -48(%rbp)
	movq	-40(%rbp), %rax
	movl	$2, (%rax)
	movl	-32(%rbp), %eax
	movl	%eax, %edx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
.LEHB4:
	call	_ZNSolsEi
	movq	%rax, %rcx
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rcx
	movl	-48(%rbp), %eax
	movl	%eax, %edx
	call	_ZNSolsEi
	movq	%rax, %rcx
	movq	.refptr._ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_(%rip), %rax
	movq	%rax, %rdx
	call	_ZNSolsEPFRSoS_E
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, %edx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZNSolsEi
	movq	%rax, %rcx
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rcx
	movq	-40(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, %edx
	call	_ZNSolsEi
	movq	%rax, %rcx
	movq	.refptr._ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_(%rip), %rax
	movq	%rax, %rdx
	call	_ZNSolsEPFRSoS_E
	leaq	.LC4(%rip), %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rax
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rcx
	movq	.refptr._ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_(%rip), %rax
	movq	%rax, %rdx
	call	_ZNSolsEPFRSoS_E
.LEHE4:
	movq	-8(%rbp), %rbx
	testq	%rbx, %rbx
	je	.L6
	movq	%rbx, %rcx
	call	_ZN4DemoD1Ev
	movl	$16, %edx
	movq	%rbx, %rcx
	call	_ZdlPvy
.L6:
	leaq	-48(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN4DemoD1Ev
	leaq	-32(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN4DemoD1Ev
	movl	$0, %eax
	jmp	.L15
.L12:
	movq	%rax, %rsi
	testb	%dil, %dil
	je	.L9
	movl	$16, %edx
	movq	%rbx, %rcx
	call	_ZdlPvy
.L9:
	movq	%rsi, %rax
	movq	%rax, %rcx
.LEHB5:
	call	_Unwind_Resume
.L14:
	movq	%rax, %rbx
	leaq	-48(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN4DemoD1Ev
	jmp	.L11
.L13:
	movq	%rax, %rbx
.L11:
	leaq	-32(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN4DemoD1Ev
	movq	%rbx, %rax
	movq	%rax, %rcx
	call	_Unwind_Resume
.LEHE5:
.L15:
	addq	$88, %rsp
	popq	%rbx
	popq	%rsi
	popq	%rdi
	popq	%rbp
	ret
	.seh_handler	__gxx_personality_seh0, @unwind, @except
	.seh_handlerdata
.LLSDA1849:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1849-.LLSDACSB1849
.LLSDACSB1849:
	.uleb128 .LEHB0-.LFB1849
	.uleb128 .LEHE0-.LEHB0
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB1-.LFB1849
	.uleb128 .LEHE1-.LEHB1
	.uleb128 .L12-.LFB1849
	.uleb128 0
	.uleb128 .LEHB2-.LFB1849
	.uleb128 .LEHE2-.LEHB2
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB3-.LFB1849
	.uleb128 .LEHE3-.LEHB3
	.uleb128 .L13-.LFB1849
	.uleb128 0
	.uleb128 .LEHB4-.LFB1849
	.uleb128 .LEHE4-.LEHB4
	.uleb128 .L14-.LFB1849
	.uleb128 0
	.uleb128 .LEHB5-.LFB1849
	.uleb128 .LEHE5-.LEHB5
	.uleb128 0
	.uleb128 0
.LLSDACSE1849:
	.text
	.seh_endproc
	.def	__tcf_0;	.scl	3;	.type	32;	.endef
	.seh_proc	__tcf_0
__tcf_0:
.LFB2382:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	leaq	_ZStL8__ioinit(%rip), %rax
	movq	%rax, %rcx
	call	_ZNSt8ios_base4InitD1Ev
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.def	_Z41__static_initialization_and_destruction_0ii;	.scl	3;	.type	32;	.endef
	.seh_proc	_Z41__static_initialization_and_destruction_0ii
_Z41__static_initialization_and_destruction_0ii:
.LFB2381:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movl	%ecx, 16(%rbp)
	movl	%edx, 24(%rbp)
	cmpl	$1, 16(%rbp)
	jne	.L19
	cmpl	$65535, 24(%rbp)
	jne	.L19
	leaq	_ZStL8__ioinit(%rip), %rax
	movq	%rax, %rcx
	call	_ZNSt8ios_base4InitC1Ev
	leaq	__tcf_0(%rip), %rax
	movq	%rax, %rcx
	call	atexit
.L19:
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.def	_GLOBAL__sub_I_main;	.scl	3;	.type	32;	.endef
	.seh_proc	_GLOBAL__sub_I_main
_GLOBAL__sub_I_main:
.LFB2383:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movl	$65535, %edx
	movl	$1, %ecx
	call	_Z41__static_initialization_and_destruction_0ii
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.ctors,"w"
	.align 8
	.quad	_GLOBAL__sub_I_main
	.ident	"GCC: (Rev10, Built by MSYS2 project) 12.2.0"
	.def	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc;	.scl	2;	.type	32;	.endef
	.def	_ZNSolsEPFRSoS_E;	.scl	2;	.type	32;	.endef
	.def	_Znwy;	.scl	2;	.type	32;	.endef
	.def	_ZdlPvy;	.scl	2;	.type	32;	.endef
	.def	_ZNSolsEi;	.scl	2;	.type	32;	.endef
	.def	_Unwind_Resume;	.scl	2;	.type	32;	.endef
	.def	_ZNSt8ios_base4InitD1Ev;	.scl	2;	.type	32;	.endef
	.def	_ZNSt8ios_base4InitC1Ev;	.scl	2;	.type	32;	.endef
	.def	atexit;	.scl	2;	.type	32;	.endef
	.section	.rdata$.refptr._ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, "dr"
	.globl	.refptr._ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
	.linkonce	discard
.refptr._ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_:
	.quad	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
	.section	.rdata$.refptr._ZSt4cout, "dr"
	.globl	.refptr._ZSt4cout
	.linkonce	discard
.refptr._ZSt4cout:
	.quad	_ZSt4cout
