#include<stdio.h>

void sum(){
    int a , b , sum;
    printf("enter a");
    scanf("%d", &a );
    printf("enter b");
    scanf("%d", &b );
    sum=a+b;
    printf("sum is %d", sum);
};
 int main(){
  sum();
  return 0;
     
 }