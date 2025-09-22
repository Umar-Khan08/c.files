#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number whose factorial is to be calculated:\n");
    scanf("%d",&n);
    int f=1;
    for(int i=1;i<=n;i++)
    f*=i;
    printf("Factorial of the number:%d",f);
}