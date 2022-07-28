.include "/home/vani/m328Pdef.inc"
ldi r16, 0b00111100 ;identifying output pins 2,3,4,5
out DDRD,r16		;declaring pins as output

ldi r16,0b00000000	;initializing W
ldi r17,0b00000001	;initializing X
ldi r18,0b00000000  ;initializing Y
ldi r19,0b00000001  ;initializing Z
ldi r20,0b00000000  

;W'
mov r0,r16
eor r0,r20

;X'
mov r1,r17
eor r1,r20

;Y'
mov r2,r18
eor r2,r20

;Z'
mov r3,r19
eor r3,r20


and r1,r3

and r18,r3

and r16, r17

and r16, r2

and r16, r19

or  r16, r18
or  ri6, r1

lsl r16
lsl r16

out PORTD,r16		;writing output to pins 2,3,4,5


Start:
rjmp Start
