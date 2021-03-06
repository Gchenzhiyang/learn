#ifndef   __LED_H__
#define   __LED_H__

#define    GPIO8             0xFF7F0000                                      //P37
#define    GPIO8_SWPORTA_DR   (*(volatile unsigned long *)(GPIO8 + 0x04*0))  //1580 Port A data register 
#define    GPIO8_SWPORTA_DDR  (*(volatile unsigned long *)(GPIO8 + 0x04*1))  //1580 Port A data direction register 


extern void led_mode(int mode);

#endif

