#include <stdio.h>
long checkPrime(int n , int i)
{
    if(i==1)
    {
        return 1;
    }
    else
    {
        if(n%i == 0)
        {
            return 0;
        }
        else checkPrime(n , i-1);
    }
}
int main()
{
    int n , res;
    printf("Enter a number ");
    scanf("%d" , &n);
    res = checkPrime(n , n/2);
    if(res == 1)
    {
        printf("\n%d is a prime number" , n);
    }
    else
    {
        printf("\n%d is not a prime number" , n);
    }
    return 0;
}
