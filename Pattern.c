#include <stdio.h>
int main()
{
    for(int i = 1; i <= 6; i++)
    {
        for(int j = 1; j<= i; j++)
        {
            printf("01");
        }
        printf("\n");
    }
    return 0;
}
