#include <stdio.h>
 
int main()
{ 
    int n,x=0;
    printf("Choose the number:");
    scanf("%d",&n);
    for (int i=1; i<=n; i+=1)
    {
        for (int j=i; j<=n; j+=1)
             if (i*i*i+j*j*j==n) 
                  ++x;
    }
    printf("Available ways : %d\n", x);
    
    return 0;
}
