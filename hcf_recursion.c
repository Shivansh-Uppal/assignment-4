#include <stdio.h>
void hcf(int n1,int n2){
    int i,gcd;
    for(i=1;i<=n1 && i<=n2;i++){
if(n1%i==0 && n2%i==0)
{
gcd=i;
}
}
printf("the hcf is %d",gcd);
  }
int main(){
    int n1,n2,gcd;
    printf("enter the first number and second number of which hcf is need ");
scanf("%d %d",&n1,&n2);
  
  hcf(n1,n2);
  return 0;
}