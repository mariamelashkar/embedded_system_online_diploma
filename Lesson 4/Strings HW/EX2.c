#include <stdio.h>
int main() {
    char text[100];
    char character;
    int count=0;
 printf("Enter a string:");
 gets(text);
 int i=0;
while(text[i] != '\0'){
    count++;
    i++;
}
printf("Length of the string:%d",count);
    return 0;
}