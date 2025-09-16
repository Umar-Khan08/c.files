#include <stdio.h>
int main()
{
    char ch;
    printf("Enter any operator:(+,-,/,*):\n");
    scanf("%c",&ch);
    int a,b,c;
    c=0;
    printf("Enter the two operands:\n");
    scanf("%d%d",&a,&b);
    switch(ch)
    {
        case '+':c=a+b;
        printf("Sum of the operands:%d\n",c);
        break;
        case '-':c=a-b;
        printf("Difference of the operands:%d\n",c);
        break;
        case '/':c=a/b;
        printf("Division of the operands:%d\n",c);
        break;
        case '*':c=a*b;
        printf("Product of the operands:%d\n",c);
        break;
        default:
        printf("Invalid Input");
    }
}