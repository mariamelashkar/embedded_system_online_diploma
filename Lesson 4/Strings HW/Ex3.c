#include <stdio.h>
#include<string.h>
int main() {
    char text[100];
    int i,n;
 printf("Enter a string:");
 gets(text);
n=strlen(text);
char text2[n];
for(i=0;i<n;i++){
  text2[i]=text[n-1-i];
}
 
printf("Reverse string is:%s",text2);
    return 0;
}