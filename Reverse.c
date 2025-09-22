#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number which is to be reversed: ");    
    scanf("%d",&n);int rev=0;
    while(n!=0)
    {
        int r=n%10;
        rev=rev*10+r;
        n=n/10;
    }printf("Reverse of a number is: %d",rev);
}