#ifndef EXT_H
#define EXT_H

#include "Ext_Cfg.h"

typedef uint8 EXT_StatusType;
#define EXT_NOT_INITIALIZED         (EXT_StatusType)0x00
#define EXT_INITIALIZED             (EXT_StatusType)0x01
typedef uint8 EXT_IntId;

typedef uint8 EXT_InterruptStates;

typedef uint8 EXT_SenseControl;

typedef uint8 EXT_PortType;
typedef uint8 EXT_PinType;

typedef struct EXT_ConfigPin
{
    EXT_IntId intId;
    EXT_InterruptStates interruptStatus;
    EXT_PortType portId;
    EXT_PinType pinId;
    EXT_SenseControl setSensebit0;
    EXT_SenseControl setSensebit1;

} EXT_ConfigType;

//EXT_ConfigPin
/* structure that is required for initialization API */
//typedef struct EXT_ConfigType
//{
//  /* array of pointers to config struct to optimize memory storage */
//  const EXT_ConfigPin Pins[EXT_NUMBER_OF_CONFIGERED_PINS];
//} EXT_ConfigType;

void Ext_Init(const EXT_ConfigType (*ConfigPtr)[]);
void Ext_setCallBack(EXT_IntId intId, void(*callBackPtr)(void));


extern const EXT_ConfigType EXT_ConfigrationsSet[EXT_NUMBER_OF_CONFIGERED_PINS];
#endif
