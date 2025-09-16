# include <stdio.h>
int main()
{
    float eng,phy,chem,math,comp;
    float sum,percentage;
    printf("Enter the marks of the subjects:\n");
    scanf("%f%f%f%f%f",&eng,&phy,&chem,&math,&comp);
    sum=eng+phy+chem+math+comp;
    printf("Sum of the marks:%.2f\n ",sum);
    percentage=(sum/500)*100;
    printf("Percentage of the student:%.2f\n",percentage);
    if(percentage>=90&&percentage<=100)
    printf("Grade:A");
    else if(percentage>=80&&percentage<90)
    printf("Grade:B");
    else if(percentage>=60&&percentage<80)
    printf("Grade:C");
    else
    printf("Fail");
}