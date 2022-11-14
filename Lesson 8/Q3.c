#include<stdio.h>
int main()
{
int i,count=0;
char alpha[100];
char *ptr=alpha;
for(i=0;*ptr!='\0';i++){
printf("%c",*ptr);
ptr++;
count++;
}
for(i=count;i>0;i--){
printf("%c",*ptr);
ptr--;
}
return 0;
}