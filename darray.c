#include <stdio.h>
int main()
{
    int ar[10][10] , sum=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("\nEnter number");
            scanf("%d",&ar[i][j]);
            if(i==j)
            {
                sum+=ar[i][j];
            }
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",ar[i][j]);

        }
        printf("\n");
    }
    printf("Sum of Diagonal Elements = %d" , sum);

}
