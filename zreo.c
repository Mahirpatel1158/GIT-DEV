#include<stdio.h>
#include<conio.h>
void main()
{
    float a;
    printf("Enter the number N:");
    scanf("%f",&a);
    if(a>0)
    {
        printf("\npositive number");
    }
    else if (a<0)
    {
        printf("\nnegative number");
    }
    else if (a=0)
    {
        printf("\nzero");
    }
    else 
    {
        printf("\ninvalid");
    }
    getch();
}