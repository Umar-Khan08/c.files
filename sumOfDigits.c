#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number whose sum of the digits is to be calculated:");
    scanf("%d",&n);int s=0;
    while(n!=0)
    {
        int r=n%10;
        s=s+r;
        n/=10;
    }printf("Sum of the Digits:%d",s);
}