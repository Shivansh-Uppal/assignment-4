#include <stdio.h>
void main(){
    int i,num,sumodd=0,sumeven=0;
    printf("enter the value whose in between sum of odd or even is required ");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        if (i%2==0)
        sumeven+=i;
        else
        sumodd+=i;
    }
}
