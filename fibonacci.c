#include<stdio.h>

int main()
{
    int a=0;
    int b=1;

    int c;

    for(int i=1; i<=10; i++)
    {
        int c;
        c=a+b;
        printf("%d\n", c );
        a=b;
        b=c;

    }




    return 0;
}