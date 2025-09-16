#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the numbers to be checked\n");
    scanf("%d%d",&a,&b);
    if(a==b)
    printf("The numbers entered by the user are equal");
    else
    printf("The numbers entered by the user are not equal");
}