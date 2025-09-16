#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the numbers to be swapped:\n");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Swapped numbers are:\n");
    printf("%d\n",a);
    printf("%d\n",b);
}