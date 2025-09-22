#include <stdio.h>
int main()
{
    int n;
    printf("Enter the numbers of terms:");
    scanf("%d",&n);
    int a=0,b=1,c=0;
    printf("%d\n",a);
    printf("%d\n",b);
    for(int i=1;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d\n",c);
    }
}