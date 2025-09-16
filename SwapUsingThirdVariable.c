#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the number to be swapped\n");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("Swapped numbers are:\n");
    printf("%d\n",a);
    printf("%d\n",b);
}