#include <stdio.h>
int sum(int n)
{
    if(n!=0)
    {
        return (n%10 + sum(n/10));
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n , res;
    printf("Enter number: \n");
    scanf("%d" , &n);
    res = sum(n);
    printf("\nSum of digits is %d ",res);
    return 0;
}
