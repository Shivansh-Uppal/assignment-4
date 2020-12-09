#include <stdio.h>
void fib(int n)
{
    static int a=0,b=1,num;
    if(n>0){
   num=a+b;
   a=b;
   b=num;
   printf("%d ",num);
   fib(n-1);
    }
}
int main()
{
        int n;
    printf("enter the number of elements: ");
    scanf("%d",&n);
    printf("fibonacci series : ");
    printf("%d %d ",0,1);
    fib(n-2);
       return 0;
}
