#include <stdio.h>

int main()
{
    int a, b, i=0, d=0;
    printf ("Enter number 1 : ");
    scanf ("%d", &a);
    printf ("Enter number 2 : ");
    scanf ("%d", &b);
    
    for ( i=2; i<a && i<b; i++)
      if ( a % i==0 && b % i==0)
        d++;

    if ( d>0 )
            printf ("not simple");
        else
            printf (" simple");

    return 0;
}