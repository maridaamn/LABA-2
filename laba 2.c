#include <stdio.h>

int main()
{
    int a, b, check1, check2, d = 0;
    printf ("Enter number 1 : \n");
    check1 = scanf("%d", &a);

while (check1 != 1)
{
    fflush(stdin);

    printf("Try again...");
    printf ("Enter number 1 : ");
    check1 = scanf ("%d", &a);
}

    printf ("Enter number 2 : \n");
    check2 = scanf("%d", &b);
    while (check1 != 1 || check2 != 1)
    {
        fflush(stdin);

        printf("Try again...");
        printf ("Enter number 2 : ");
        check2 =  scanf ("%d", &b);
    }
    
    for (int i=2; i<a && i<b; i++)
      if ( a % i==0 && b % i==0)
        d++;

    if ( d>0 )
            printf ("not simple");
        else
            printf (" simple");


    return 0;
}