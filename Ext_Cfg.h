#ifndef EXT_CFG__H
#define EXT_CFG__H

#include "../Dio_Driver/Dio.h"
#include "Std_Types.h"

#define EXT_NUMBER_OF_CONFIGERED_PINS           (uint8)0x01

#define EXT_INT0                                (EXT_InterruptStates)0X00 
#define EXT_INT1                                (EXT_InterruptStates)0X01
#define EXT_INT2                                (EXT_InterruptStates)0X02


////////////// INT0 //////////////
#define EXT_INT0_SENSE_LOW_LEVEL_ISC01                (EXT_SenseControl)0X00  //   0    // ISC01
#define EXT_INT0_SENSE_LOW_LEVEL_ISC00                (EXT_SenseControl)0X00  //   0    // ISC00

#define EXT_INT0_SENSE_ANY_LOGICAL_CHANGE_ISC01       (EXT_SenseControl)0X00  //   0    // ISC01
#define EXT_INT0_SENSE_ANY_LOGICAL_CHANGE_ISC00       (EXT_SenseControl)0X01  //   1    // ISC00

#define EXT_INT0_SENSE_FALLING_EDGE_ISC01             (EXT_SenseControl)0X01  //   1    // ISC01
#define EXT_INT0_SENSE_FALLING_EDGE_ISC00             (EXT_SenseControl)0X00  //   0    // ISC00

#define EXT_INT0_SENSE_RISING_EDGE_ISC01              (EXT_SenseControl)0X01  //   1    // ISC01
#define EXT_INT0_SENSE_RISING_EDGE_ISC00              (EXT_SenseControl)0X01  //   1    // ISC00


////////////// INT1 //////////////
#define EXT_INT1_SENSE_LOW_LEVEL_ISC11                (EXT_SenseControl)0X00  //   0    // ISC11
#define EXT_INT1_SENSE_LOW_LEVEL_ISC10                (EXT_SenseControl)0X00  //   0    // ISC10

#define EXT_INT1_SENSE_ANY_LOGICAL_CHANGE_ISC11       (EXT_SenseControl)0X00  //   0    // ISC11
#define EXT_INT1_SENSE_ANY_LOGICAL_CHANGE_ISC10       (EXT_SenseControl)0X01  //   1    // ISC10

#define EXT_INT1_SENSE_FALLING_EDGE_ISC11             (EXT_SenseControl)0X01  //   1    // ISC11
#define EXT_INT1_SENSE_FALLING_EDGE_ISC10             (EXT_SenseControl)0X00  //   0    // ISC10

#define EXT_INT1_SENSE_RISING_EDGE_ISC11              (EXT_SenseControl)0X01  //   1    // ISC11
#define EXT_INT1_SENSE_RISING_EDGE_ISC10              (EXT_SenseControl)0X01  //   1    // ISC10


////////////// INT2 //////////////
#define EXT_INT2_SENSE_FALLING_EDGE_ISC2              (EXT_SenseControl)0X00  //   0    // ISC2
#define EXT_INT2_SENSE_RISING_EDGE_ISC2               (EXT_SenseControl)0X01  //   1    // ISC2



                                                                        /* ISC11   ISC10*/
#define EXT_INT1_SENSE_LOW_LEVEL                (EXT_SenseControl)0X00  //   0       0
#define EXT_INT1_SENSE_ANY_LOGICAL_CHANGE       (EXT_SenseControl)0X01  //   0       1
#define EXT_INT1_SENSE_FALLING_EDGE             (EXT_SenseControl)0X02  //   1       0
#define EXT_INT1_SENSE_RISING_EDGE              (EXT_SenseControl)0X03  //   1       1
                                                                        /* ISC01   ISC00*/
#define EXT_INT0_SENSE_LOW_LEVEL                (EXT_SenseControl)0X00  //   0       0
#define EXT_INT0_SENSE_ANY_LOGICAL_CHANGE       (EXT_SenseControl)0X01  //   0       1
#define EXT_INT0_SENSE_FALLING_EDGE             (EXT_SenseControl)0X02  //   1       0
#define EXT_INT0_SENSE_RISING_EDGE              (EXT_SenseControl)0X03  //   1       1
                                                                        /*  ISC2 */
#define EXT_INT2_SENSE_FALLING_EDGE             (EXT_SenseControl)0X00  //   0    
#define EXT_INT2_SENSE_RISING_EDGE              (EXT_SenseControl)0X01  //   1    



#define EXT_INTERRUPT_DISABLE                   (EXT_InterruptStates)0X00 
#define EXT_INTERRUPT_ENABLE                    (EXT_InterruptStates)0X01 




#define EXT_INT0_PORT  PORTD_ID
#define EXT_INT0_PIN   PIN2_ID

#define EXT_INT1_PORT  PORTD_ID
#define EXT_INT1_PIN   PIN3_ID


#define EXT_INT2_PORT  PORTB_ID
#define EXT_INT2_PIN   PIN2_ID
#endif
