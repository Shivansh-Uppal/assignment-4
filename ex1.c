#include <stdio.h>
#include<string.h>
int main(){
    char str[50];
   int i=0;
printf("enter your name: ");
scanf("%s",str);
while(str[i]!='\0'){
    printf("%d",str[i]);
    i++;
}
return 0;
}