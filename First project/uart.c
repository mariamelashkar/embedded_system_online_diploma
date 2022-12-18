#include "uart.h"
#define UART0DR *((volatile unsigned int*)(0x101f1000)) 

void uart_send(unsigned char* ptr_uart){

while(*ptr_uart != '\0'){
UART0DR=(unsigned int)(*ptr_uart);
ptr_uart++;
}


}