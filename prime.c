#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number which is to checked:");
    scanf("%d",&n);
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        c++;
    }if(c==2)
    printf("The number entered by the user is prime");
    else
    printf("The number entered by the user is not prime");
}