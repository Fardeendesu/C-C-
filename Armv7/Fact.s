.syntax unified
.cpu cortex-a9

.section .text
.global main

main:
    MOV r0, #5
    MOV r1, #1

loop:
    CMP r0, #1
    BEQ end

    MUL r1, r1, r0
    SUB r0, r0, #1
    B loop

end:
    B .
