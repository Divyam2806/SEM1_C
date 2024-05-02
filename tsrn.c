#include<stdio.h>

int add(int a, int b) {
    int sum = a+b ;
    return sum;
}

int main(){


     int a, b, result;
    printf("enter two numbers: ");
    scanf("%d%d", &a, &b);
    result = add(a, b);

    printf("the sum is : %d\n", result);

 return 0;

}