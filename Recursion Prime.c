#include <stdio.h>
#include<conio.h>

int prime(int n,int i)
{
    if (i==1)
    {
        return 1;
    }
    else
    {
       if (n%i==0)
       {
         return 0;
       }
       else
       {
         return prime(n,i-1);
       }
    }
}

void main()
{
    int n,i;
    printf("Enter a number: ");
    scanf("%d", &n);
    i= prime(n,n/2);
    if (i==1)
    {
        printf("%d is a prime number\n", n);
    }
    else
    {
        printf("%d is not a prime number\n", n);
    }
}
