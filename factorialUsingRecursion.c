#include <stdio.h>
int factorial(int n)
{
    if(n==1||n==0)
    return 1;
    else
    return n*factorial(n-1);
}int main()
{
    int n,fact;
    printf("Enter the number whose factorial is to be calculated:");
    scanf("%d",&n);
    fact=factorial(n);
    printf("Factorial:%d",fact);
}