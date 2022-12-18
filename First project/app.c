#include "uart.h"
unsigned char string_buffer[100]="Learn-in-depth:Mariam";
void main(void){
uart_send(string_buffer);

}