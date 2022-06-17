#include<stdio.h>
int main()
{
    int a;
    printf("Enter the No. of day from 1-7: \n");
    scanf("%d", &a);
    switch(a)
    {
        case 1:printf("Sunday");
        break;
        case 2:printf("Monday");
        break;
        case 3:printf("Tuesday");
        break;
        case 4:printf("Wednesday");
        break;
        case 5:printf("Thusrday");
        break;
        case 6:printf("Friday");
        break;
        case 7:printf("Saturday");
        break;
        dafualt:printf("Invalid input (enter from 1 to 7)");
    }
    return 0;
}