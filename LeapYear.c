#include <stdio.h>
int main()
{
    int y;
    printf("ENTER THE YEAR TO BE CHECKED:\n");
    scanf("%d",&y);
    if(y%400==0||(y%100!=0)&&(y%4==0))
    printf("The year entered by the user is a leap year");
    else
    printf("The year entered by the user is not a leap year");
}