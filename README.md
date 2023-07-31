# **External Interrupts Driver for AVR ATmega32**
This repository provides an implementation of an External Interrupts Driver for AVR ATmega32 microcontrollers. The driver can be used to handle external interrupts in embedded systems.

## **File Description**
The files in this repository are as follows:

- **Common_Macros**.h: This file contains commonly used macros in AVR microcontroller programming, such as setting or clearing a bit in a register.
- **Compiler**.h: This file defines the compiler used for the code. In this case, it is defined for the AVR-GCC compiler.
- **EXT_Regs**.h: This file contains the memory mapping of External Interrupt Registers in the AVR ATmega32 microcontroller.
- **Ext**.c: This file contains the implementation of functions related to external interrupts in AVR ATmega32 microcontroller, such as enabling or disabling external interrupts, setting interrupt sense control, and setting interrupt flags.
- **Ext**.h: This file contains the function prototypes for the functions defined in Ext.c.
- **Ext_Cfg**.h: This file contains the configuration settings for external interrupts, such as interrupt sense control settings.
- **Ext_PBCfg**.c: This file contains the implementation of functions related to the configuration of external interrupts, such as initializing the interrupt sense control.
- **Std_Types**.h: This file contains the standard data types used in AVR microcontroller programming, such as uint8_t, uint16_t, etc.
- **platform_types**.h: This file contains the platform-specific data types used in AVR microcontroller programming.

## **Function Description**

The following are the functions implemented in Ext.c:
```
void Ext_Init(void)
```
Initializes the External Interrupts by enabling the Global Interrupt and setting the interrupt sense control based on the configuration settings.
```
void Ext_SetInterruptSenseControl(const uint8_t a_u8InterruptNum, const uint8_t a_u8InterruptSenseControl)
```
Sets the interrupt sense control for the specified interrupt number.
```
void Ext_EnableInterrupt(const uint8_t a_u8InterruptNum)
```
Enables the specified external interrupt.
```
void Ext_DisableInterrupt(const uint8_t a_u8InterruptNum)
```
Disables the specified external interrupt.
```
void Ext_SetInterruptFlag(const uint8_t a_u8InterruptNum)
```
Sets the interrupt flag for the specified interrupt number.
```
void Ext_ClearInterruptFlag(const uint8_t a_u8InterruptNum)
```
Clears the interrupt flag for the specified interrupt number.
The following are the functions implemented in Ext_PBCfg.c:


## **Macros**
The following are the macros defined in Common_Macros.h:

- **SET_BIT(reg,bit)**: Sets the specified bit in the register.
- **CLEAR_BIT(reg,bit)**: Clears the specified bit in the register.
- **TOGGLE_BIT(reg,bit)**: Toggles the specified bit in the register.
- **BIT_IS_SET(reg,bit)**: Checks if the specified bit in the register is set.
- **BIT_IS_CLEAR(reg,bit)**: Checks if the specified bit in the register is clear.
  
These macros are used to simplify the code and make it more readable.

## **Data Types**
- **typedef uint8 EXT_StatusType**: This defines a new data type EXT_StatusType as an unsigned 8-bit integer.
  

- **typedef uint8 EXT_IntId**: This defines a new data type EXT_IntId as an unsigned 8-bit integer.

- **typedef uint8 EXT_InterruptStates**: This defines a new data type EXT_InterruptStates as an unsigned 8-bit integer.

- **typedef uint8 EXT_SenseControl**: This defines a new data type EXT_SenseControl as an unsigned 8-bit integer.

- **typedef uint8 EXT_PortType**: This defines a new data type EXT_PortType as an unsigned 8-bit integer.

- **typedef uint8 EXT_PinType**;: This defines a new data type EXT_PinType as an unsigned 8-bit integer.

- **typedef struct EXT_ConfigPin** This defines a new struct data type EXT_ConfigPin that contains the following members:

    - EXT_IntId intId: The interrupt identifier.
    - EXT_InterruptStates interruptStatus: The interrupt status.
    - EXT_PortType portId: The port identifier.
    - EXT_PinType pinId: The pin identifier.
    - EXT_SenseControl setSensebit0: The sense control bit 0.
    - EXT_SenseControl setSensebit1: The sense control bit 1.

## **Conclusion**
This repository provides a useful implementation of an External Interrupts Driver for AVR ATmega32 microcontrollers. The driver can be used to handle external interrupts in embedded systems. The code is well-documented and easy to understand.
