#include <stdio.h>

int fib (int n)
{
    if (n < 2) 
        return 1;
    
    return fib(n-1) + fib(n-2);
}

int main (void)
{
    int i, n=0, fibr=0, pertence=0;
    
    printf("n: ");
    scanf("%d", &n);
    
    for (i=0; i<=n; i++)
    {
        fibr = fib(i);
        
        if (n == fibr)
            pertence = 1;
            
        printf("%d ", fibr);
    }
    
    if (pertence)
        printf("\n%d pertence a lista de fibonacci", n);
    else
        printf("\n%d nao pertence a lista de fibonacci", n);
        
    return 0;
}