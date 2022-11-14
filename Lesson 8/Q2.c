#include<stdio.h>
int main()
{
int i;
char x=65;
char *ptr=&x;
for(i=0;i<26;i++){
printf("%c",*ptr+i);
printf("\t");
}
return 0;
}