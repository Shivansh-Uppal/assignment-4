#include <stdio.h>
int su(int);
int main(){
    int a,j;
    printf("enter : ");
    scanf("%d",&a);
    j=su(a);
    return 0;
}
int su(int a){
    int dig,sum=0;
    while(a>0){
        dig=a%10;
        sum=sum+dig;
        a=a/10;
      }
printf("%d",sum);
return a;
}