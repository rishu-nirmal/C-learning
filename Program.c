// Fibonacci series //

#include <stdio.h>
int main()
{
    int n,i;
    int a = 0, b = 1, c;
    printf("\n Enter the number of terms: ");
    scanf("%d",&n);
    printf("\n Fibonacci series is: ");
    for(i=1;i<=n;i++)
    {
        printf("\t%d",a);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}