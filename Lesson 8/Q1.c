#include<stdio.h>
int main(){
int m=29;
int *ab=&m;
printf("Adress of m: %x \n",&m);
printf("value of m: %d \n",m);
printf("Now ab is assigned with the address of m \n");
printf("Adress of pointer ab: %p \n",ab);
printf("value of pointer ab: %d \n",*ab);
m=34;
printf("the value of m assigned to 34 now \n");
printf("Adress of pointer ab: %p \n",ab);
printf("value of pointer ab: %d \n",*ab);
*ab=7;
printf("The pointer variable ab is assigned with the value 7 now.\n");
printf("Adress of m: %x \n",&m);
printf("value of m: %d \n",m);
return 0;
}