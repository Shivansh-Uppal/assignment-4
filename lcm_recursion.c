#include <stdio.h>
void plcm(int n1,int n2){
    int i,gcd,lcm;
    for(i=1;i<=n1 && i<=n2;i++){
if(n1%i==0 && n2%i==0)
{
gcd=i;
}
}
lcm=(n1*n2)/gcd;
printf("the hcf is %d",lcm);
  }
int main(){
    int n1,n2,gcd;
    printf("enter the first number and second number of which lcm is need ");
scanf("%d %d",&n1,&n2);
  plcm(n1,n2);
  return 0;
}