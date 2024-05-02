#include<stdio.h>

int add(int a, int b) {

    return a + b;
}

int main(){
 int num1, num2, sum;

 printf("Enter two numbers ");
 scanf("%d%d", &num1, &num2);

 sum = add(num1, num2);

 printf("the sum is : %d\n", sum);

 return 0;

}