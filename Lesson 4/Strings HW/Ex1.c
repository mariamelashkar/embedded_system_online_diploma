#include <stdio.h>
int main() {
    char text[100];
    char character;
    int i, count=0;
 printf("Enter a string:");
 gets(text);
 printf("Enter a character to find frequency:");
 scanf("%c",&character);
 for(i=0;i<100;i++){
     if(text[i]==character)
         count++;
 }
 printf("Frequency of %c= %d",character,count);
    return 0;
}