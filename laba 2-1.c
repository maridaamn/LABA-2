#include <stdio.h>

int main() 
{
    
     int n=1;
     double sum;
     sum = 0;
     while(sum < 5)
     {

     sum = sum + (1./n);
     n++;
     
     } 
     
     printf("n = - %d\n", n);
     printf("sum = %lf", sum);
     
     return 0;
}