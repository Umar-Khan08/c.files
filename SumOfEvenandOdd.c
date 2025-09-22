#include <stdio.h>
int main()
{
    int n,se=0,so=0;
    printf("Enter the end of the range:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        se+=i;
        else
        so+=i;
    }printf("Sum of even digits:%d\n",se);
    printf("Sum of odd digits:%d\n",so);
}