#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number to be checked:\n");
    scanf("%d",&a);
    if(a%2==1)
    printf("The number entered by the user is odd");
    else
    printf("The number entered by the user is even");
}