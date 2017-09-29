#ifndef ARDUINO_ZUNO_C_API
#define ARDUINO_ZUNO_C_API
#include "ArduinoTypes.h"
// C-prototypes
// GPIO
void pinMode(BYTE pin, BYTE mode);
BYTE digitalRead(BYTE pin);
void digitalWrite(BYTE pin, BYTE value);
void digitalToggle(byte pin);
WORD analogRead(BYTE pin);
BYTE zunoGetWakeReason(void);
// Time
DWORD millis();
void delay(DWORD value);
void delayLoops(byte v);
void NOPS(byte i);
// Interrupts
void zunoExtIntMode(byte inum, byte mode);
void zunoGPTInit(byte flags);
void zunoGPTEnable(byte bEnable);
void zunoGPTSet(word interval);
void noInterrupts();
void interrupts();
// Math
long map(long x, long in_min, long in_max, long out_min, long out_max);
// Dynamic configuration
void zunoAddChannel(byte type, byte st, byte p);
void zunoAddAssociation(byte t);
// Configuration parameters
void zunoLoadCFGParam(byte param_number, dword * value);
void zunoSaveCFGParam(byte param_number, dword * value);
// SysCall
void zunoSysCall(byte syscall_vector, ...);
void zunoLCALL(word address);
byte zunoGI(char * name);
void zunoSI(char * name, byte value);
void zunoPushSysParam(int offset, ...);
void zunoASM(char * code);
void zunoCall();
#endif // ARDUINO_ZUNO_C_API
