#include <stdio.h>
int main()
{
    int m;
    printf("Enter your marks\n");
    scanf("%d" , &m);
    if(m>=85 && m<=100)
    {
        printf("Grade A");
    }
    else if(m>=70 && m<85)
    {
        printf("Grade B");
    }
    else if(m>=55 && m<70)
    {
        printf("Grade C");
    }
    else if(m>=40 && m<55)
    {
        printf("Grade D");
    }
    else
    {
        printf("Grade F");
    }
}
