#include<stdio.h>
void main(){
char x;
printf("Enter an alphabet :");
scanf("%c",&x);
switch(x){
  case'a':
case 'e':
case 'i':
case 'o':
case 'u':
printf("%c is a vowel",x);
break;
default:printf("%c is a consonant",x);
break;
}

}