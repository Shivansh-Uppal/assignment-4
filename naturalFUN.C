#include <stdio.h>
void natural(int,int);
int main(){
    int n,i;
    printf("enter the lowelimit from where natural number is needed ");
    scanf("%d",&i);
printf("enter the end limit till where natural number is required ");
scanf("%d",&n);
printf("all natural number in range are : ");
 natural(i,n);
return 0;
}
void natural(int i, int n){
    if(i>n)
return;
    printf("%d\n",i);
    natural(i+1,n);
}
