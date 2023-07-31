#include "Ext.h"

#include <util/delay.h> /* For the delay functions */

#include "../GIE_Driver/GIE.h"
#include "../Dio_Driver/Dio.h"
#include "EXT_Regs.h"

static const EXT_ConfigType (*Gpt_ConfigPtr)[EXT_NUMBER_OF_CONFIGERED_PINS] = NULL_PTR;
static EXT_StatusType Gpt_Status = EXT_NOT_INITIALIZED;

static void (* volatile g_callBackPtr_INT0)(void) = NULL_PTR;
static void (* volatile g_callBackPtr_INT1)(void) = NULL_PTR;
static void (* volatile g_callBackPtr_INT2)(void) = NULL_PTR;

//ISR(INT0_vect) {
//	if(g_callBackPtr_INT0 != NULL_PTR) {
//		(*g_callBackPtr_INT0)();
//	}
//}

#define LED_PORT  PORTA_ID
#define LED_PIN   PIN4_ID
ISR(INT1_vect) {
	Dio_SetupPinDirection(LED_PORT, LED_PIN, PIN_OUTPUT);

	Dio_WritePin(LED_PORT, LED_PIN, STD_HIGH);
	_delay_ms(1000);
	Dio_WritePin(LED_PORT, LED_PIN, STD_LOW);
	_delay_ms(1000);
	if(g_callBackPtr_INT1 != NULL_PTR) {
		(*g_callBackPtr_INT1)();
	}
}

//ISR(INT2_vect) {
//	if(g_callBackPtr_INT2 != NULL_PTR) {
//		(*g_callBackPtr_INT2)();
//	}
//}


void Ext_Init(const EXT_ConfigType (*ConfigPtr)[]) {
    Gpt_Status = EXT_INITIALIZED;
    Gpt_ConfigPtr = ConfigPtr;
    for (uint8 i = 0; i < EXT_NUMBER_OF_CONFIGERED_PINS; i++)
    {
        switch ((*Gpt_ConfigPtr)[i].intId)
        {
        case EXT_INT0:
            /* Set Pin ISC00 */
            MCUCR_REG->MCUCR_BitField.ISC00 = (*Gpt_ConfigPtr)[i].setSensebit0;
            /* Set Pin ISC01 */
            MCUCR_REG->MCUCR_BitField.ISC01 = (*Gpt_ConfigPtr)[i].setSensebit1;
            break;
        case EXT_INT1:
            /* Set Pin ISC10 */
            MCUCR_REG->MCUCR_BitField.ISC10 = (*Gpt_ConfigPtr)[i].setSensebit0;
            /* Set Pin ISC11 */
            MCUCR_REG->MCUCR_BitField.ISC11 = (*Gpt_ConfigPtr)[i].setSensebit1;
            break;
        case EXT_INT2:
            /* Set Pin ISC2 */
        	MCUCSR_REG->MCUCSR_BitField.ISC2 = (*Gpt_ConfigPtr)[i].setSensebit0;
            break;
        
        default:
            break;
        } 
        if ((*Gpt_ConfigPtr)[i].interruptStatus == EXT_INTERRUPT_ENABLE)
        {
            /* Set Pin Direction to Input */
            Dio_SetupPinDirection((*Gpt_ConfigPtr)[i].portId, (*Gpt_ConfigPtr)[i].pinId, PIN_INPUT);
            switch ((*Gpt_ConfigPtr)[i].intId)
			{
			case EXT_INT0:
				GICR_REG->GICR_BitField.INT0 = 1;
				break;
			case EXT_INT1:
				GICR_REG->GICR_BitField.INT1 = 1;
				break;
			case EXT_INT2:
				GICR_REG->GICR_BitField.INT2 = 1;
				break;
			default:
				break;
			}
        }
        GIE_EnableIBit();
    }
    
}
void Ext_setCallBack(EXT_IntId intId, void(* volatile callBackPtr)(void)) {
	if(intId == EXT_INT0) {
		g_callBackPtr_INT0 = callBackPtr;
	} else if(intId == EXT_INT1) {
		g_callBackPtr_INT1 = callBackPtr;
	}else if(intId == EXT_INT2) {
		g_callBackPtr_INT2 = callBackPtr;
	} else {
		/* Do Nothing*/
	}
}




