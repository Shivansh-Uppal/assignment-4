#include<stdio.h>
void even(int i,int j){
    printf("even : ");
   for(i=1;i<=j;i++){
       if(i%2==0){
        printf("%d ",i);
    }
   }
}
void odd(int i,int j){
    printf("\n odd : ");
   for(i=1;i<=j;i++){
       if((i%2)!=0){
        printf("%d ",i);
    }
   }
}
int main(){
    int i,j;
    printf("enter the lower limit : ");
    scanf("%d",&i);
    printf("enter the upper limit : ");
    scanf("%d",&j);
    even(i,j);
    odd(i,j);
    return 0;
}