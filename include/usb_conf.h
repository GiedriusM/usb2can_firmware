/******************** (C) COPYRIGHT 2006 STMicroelectronics ********************
* File Name          : usb_conf.h
* Author             : MCD Application Team
* Date First Issued  : 10/01/2006 : V1.0
* Description        : Voice Speaker configuration file
********************************************************************************
* History:
* 10/01/2006 : V1.0
********************************************************************************
* THE PRESENT SOFTWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
* WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE TIME.
* AS A RESULT, STMICROELECTRONICS SHALL NOT BE HELD LIABLE FOR ANY DIRECT,
* INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING FROM THE
* CONTENT OF SUCH SOFTWARE AND/OR THE USE MADE BY CUSTOMERS OF THE CODING
* INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
*******************************************************************************/
#ifndef __USB_CONF_H
#define __USB_CONF_H
/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

/*-------------------------------------------------------------*/
/* define the �C and the Bufferd Mode                          */
/*-------------------------------------------------------------*/
#define STR7xx  /*STR7 family*/ 
//#define STR71x  /* STR71x �Cs*/
#define STR75x  /* STR75x �Cs*/
//#define STR91x   /*STR91x Family*/
//#define STR91x_USB_BUFFERED /* Buffered Mode*/
//#define STR91x_USB_NON_BUFFERED /*Non buffered mode*/
/*-------------------------------------------------------------*/
/* EP_NUM */
/* defines how many endpoints are used by the device */
/*-------------------------------------------------------------*/

#define EP_NUM  			(5)

/*-------------------------------------------------------------*/
/* --------------   Buffer Description Table  -----------------*/
/*-------------------------------------------------------------*/
/* buffer table base address */
/* buffer table base address */
#define BTABLE_ADDRESS      (0x00)

/* EP0  */
/* rx/tx buffer base address */
#define ENDP0_RXADDR        (0x40)
#define ENDP0_TXADDR        (0x80)

/* EP1  */
/* tx buffer base address */
#define ENDP1_TXADDR        (0xC0)
#define ENDP2_RXADDR        (0x100)
#define ENDP3_TXADDR        (0x140)
#define ENDP4_RXADDR        (0x180)

#define ENDP1_BUFF_ADDR        (0xC0)
#define ENDP2_BUFF_ADDR        (0x100)
#define ENDP3_BUFF_ADDR        (0x140)
#define ENDP4_BUFF_ADDR        (0x180)

#define ENDP1_BUFF0_ADDR        (0xC0)
#define ENDP1_BUFF1_ADDR        (0x100)
#define ENDP2_BUFF0_ADDR        (0x140)
#define ENDP2_BUFF1_ADDR        (0x180)

/*-------------------------------------------------------------*/
/* -------------------   ISTR events  -------------------------*/
/*-------------------------------------------------------------*/
/* IMR_MSK */
/* mask defining which events has to be handled */
/* by the device application software */
#define IMR_MSK (CNTR_CTRM  | CNTR_SOFM  | CNTR_RESETM | ISTR_SUSP )

/* CTR service routines */
/* associated to defined endpoints */
//#define  EP1_IN_Callback   NOP_Process
#define  EP2_IN_Callback   NOP_Process
//#define  EP3_IN_Callback   NOP_Process
#define  EP4_IN_Callback   NOP_Process
#define  EP5_IN_Callback   NOP_Process
#define  EP6_IN_Callback   NOP_Process
#define  EP7_IN_Callback   NOP_Process
#define  EP8_IN_Callback   NOP_Process
#define  EP9_IN_Callback   NOP_Process
#define  EP10_IN_Callback  NOP_Process
#define  EP11_IN_Callback  NOP_Process
#define  EP12_IN_Callback  NOP_Process
#define  EP13_IN_Callback  NOP_Process
#define  EP14_IN_Callback  NOP_Process
#define  EP15_IN_Callback  NOP_Process


#define  EP1_OUT_Callback   NOP_Process
//#define  EP2_OUT_Callback   NOP_Process
#define  EP3_OUT_Callback   NOP_Process
//#define  EP4_OUT_Callback   NOP_Process
#define  EP5_OUT_Callback   NOP_Process
#define  EP6_OUT_Callback   NOP_Process
#define  EP7_OUT_Callback   NOP_Process
#define  EP8_OUT_Callback   NOP_Process
#define  EP9_OUT_Callback   NOP_Process
#define  EP10_OUT_Callback  NOP_Process
#define  EP11_OUT_Callback  NOP_Process
#define  EP12_OUT_Callback  NOP_Process
#define  EP13_OUT_Callback  NOP_Process
#define  EP14_OUT_Callback  NOP_Process
#define  EP15_OUT_Callback  NOP_Process


#endif /* __USB_CONF_H */
/******************* (C) COPYRIGHT 2006 STMicroelectronics *****END OF FILE****/
