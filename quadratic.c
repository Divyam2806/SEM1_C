#include<stdio.h>
#include<math.h>

int main()
{
    int a, b, c, d;
     
    printf("enter 3 numbers");
    scanf("%d%d%d", &a, &b, &c);
    d=(b*b)-(4*a*c);

    if(d > 0)
    {
        printf("roots are real\n");
        printf("roots are %d %d" , (-b + sqrt(d))/2*a, (-b - sqrt(d))/2*a );
    } 
    if(d == 0)
    {
        printf("roots are equal\n");
        printf("roots are %d %d ", (-b)/2*a, (-b)/2*a ); 
    }
    if(d < 0)
    {
        printf("roots are imaginery\n");
    }

    return 0;
}