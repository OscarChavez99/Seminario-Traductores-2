section .text 
global suma
, main
suma:
 	PUSH rbp 
	MOV rbp, rsp 
	SUB rsp, 48 
	MOV QWORD [rbp -24], rdi 
MOV QWORD [rbp -28], rsi 
	MOV rax, QWORD [rbp -28]
	MOV rdi, QWORD [rbp -24]
	ADD rax, rdi

	ADD rsp, 48 
	MOV rsp, rbp 
	POP rbp 
	ret 
	
main:
 	PUSH rbp 
	MOV rbp, rsp 
	SUB rsp, 48 
		MOV ax,8
	MOV rdi, rax	MOV ax,9
	MOV rsi, rax
	call suma
	ADD rsp, 48 
	MOV rsp, rbp 
	MOV rax, 60 
	MOV rdi, 0 
	syscall 
	