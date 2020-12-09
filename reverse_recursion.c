#include <stdio.h>
int rev(int);
int main(){
int i,j;
printf("enter the number whose reverse is needed: ");
scanf("%d",&i);
j= rev(i);
 printf("reversed number : %d",j);
return 0;
}
int rem,sum=0;
int rev(int i){
  while (i!=0) {
        rem = i % 10;
        sum = sum * 10 + rem;
        i/= 10;
    }
    return sum;
}
