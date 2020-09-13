#include <stdio.h>
int main()
{
    int ch;
    printf("Enter your choice\n");
    scanf("%d" , &ch);
    switch(ch)
    {
        case 1:printf("\nFood Item - Pizza");
               printf("\nPrice - Rs 239");
               break;
        case 2:printf("\nFood Item - Burger");
               printf("\nPrice - 129");
               break;
        case 3:printf("\nFood Item - Pasta");
               printf("\nPrice - 179");
               break;
        case 4:printf("\nFood Item - French Fries");
               printf("\nPrice - 99");
               break;
        case 5:printf("\nFood Item - Sandwich");
               printf("\nPrice - 149");
               break;
        default:printf("Invalid Choice");
    }
}
