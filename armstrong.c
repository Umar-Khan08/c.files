#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool armstrong(int n)
    {    int c=0,s=0,t=n,k=n;
        while(n!=0)
        {
            c++;
            n/=10;
        } 
        while(t!=0)
        {
            int r=t%10;
            s=s+pow(r,c);
            t/=10;
        } if(s==k)
        return true;
        else
        return false;
    }
int main()
{   int n;
    printf("Enter the range\n");
    scanf("%d",&n);int i;
    for(i=1;i<=n;i++)
    {
        if(armstrong(i)==true)
        printf("%d\n",i);
    }
}