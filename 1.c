#include<stdio.h>
#include<math.h>
#include<stdlib.h>

   struct data
   {
    long name;
    int age;
    float height;

   };
   

int main(){ 

    struct data s1;

 s1.name= 'h' ;
 s1.age=19;
 s1.height=5.5;


printf(" Name of student is %c\n Age of student is %d\n Height of student is %f\n",  s1.name,  s1.age, s1.height );
     
     
     return 0;
}