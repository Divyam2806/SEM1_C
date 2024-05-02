#include<stdio.h>

int add(){
    int num1, num2;
    printf("Enter two numbers ");
 scanf("%d%d", &num1, &num2);

 return num1 + num2;
}

int main(){
    int sum = add();

    printf("the sum is %d", sum);

    return 0;
}