#include "Std_Types.h"

typedef union MCUCR_Union
{
	volatile uint8 Register;
	struct MCUCR_BitField
	{
		volatile uint8 ISC00 :1; // 0
		volatile uint8 ISC01 :1; // 1
		volatile uint8 ISC10 :1; // 2
		volatile uint8 ISC11 :1; // 3
		volatile uint8 SM0	 :1; // 4
		volatile uint8 SM1	 :1; // 5
		volatile uint8 SM2	 :1; // 6
		volatile uint8 SE	 :1; // 7
	} MCUCR_BitField;
}MCUCR_Union;
#define MCUCR_REG           ((volatile MCUCR_Union *) 0x55)    // MCU Control Register – MCUCR


typedef union MCUCSR_Union
{
	volatile uint8 Register;
	struct MCUCSR_BitField
	{
		volatile uint8 PORF  :1; // 0
		volatile uint8 EXTRF :1; // 1
		volatile uint8 BORF  :1; // 2
		volatile uint8 WDRF  :1; // 3
		volatile uint8 JTRF  :1; // 4
		volatile uint8 		 :1; // 5
		volatile uint8 ISC2  :1; // 6
		volatile uint8 JTD	 :1; // 7
	} MCUCSR_BitField;
}MCUCSR_Union;
#define MCUCSR_REG           ((volatile MCUCSR_Union *) 0x54)    // MCU Control and Status Register – MCUCSR


typedef union GICR_Union
{
	volatile uint8 Register;
	struct GICR_BitField
	{
		volatile uint8 IVCE  :1; // 0
		volatile uint8 IVSEL :1; // 1
		volatile uint8 		 :1; // 2
		volatile uint8       :1; // 3
		volatile uint8 	     :1; // 4
		volatile uint8 INT2	 :1; // 5
		volatile uint8 INT0	 :1; // 6
		volatile uint8 INT1	 :1; // 7
	} GICR_BitField;
}GICR_Union;
#define GICR_REG           ((volatile GICR_Union *) 0x5B)    // General Interrupt Control Register – GICR

