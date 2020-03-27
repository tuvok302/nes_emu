#include <stdint.h>

typedef struct cpu_registers {
	uint8_t X;
	uint8_t Y;
	uint8_t A;
	uint8_t S;
	uint8_t P;	
	uint16_t PC;
} cpu_registers;

typedef struct cpu_memory {
	uint8_t page;
} cpu_memory;

typedef struct cpu_state {
	cpu_registers registers;
} cpu_state;

cpu_state setCPUPowerOn(cpu_state state){
	state.registers.X = 0;
	state.registers.Y = 0;
	state.registers.A = 0;
	state.registers.S = 0xFD;
	state.registers.P = 0x34;
	return state;
}
