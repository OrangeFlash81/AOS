#pragma once

enum avm_instruction {
	NOP    = 0b11111111,
	HLT    = 0b11111110,
	SLP    = 0b11111101,

	MOV    = 0b00000000,
	ALCP   = 0b00000001,
	DSTP   = 0b00000010,
	LOAD   = 0b00000011,
	STORE  = 0b00000100,
	ADD    = 0b00000101,
	SUB    = 0b00000110,
	INC    = 0b00000111,
	DEC    = 0b00001000,

	OUT    = 0b00001001,
	OUTN   = 0b00001010,
	OUTTC  = 0b00001011,

	JMP    = 0b00010000,
};