#include <stdio.h>
int pal(int);
int main(){
int i,j;
printf("enter the number whose palindrome is to be checked: ");
scanf("%d",&i);
j= pal(i);
 return 0;
}
int pal(int i){
    int rem,sum=0,num=i;
  while (i!=0) {
        rem = i % 10;
        sum = sum * 10 + rem;
        i/= 10;
    }
    if(num==sum){
        printf("the number is palindrome");
    }
    else{
    printf("the number is not palindrome");
    }
    return i;
}