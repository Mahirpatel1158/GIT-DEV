#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,a[3][3],j,row,col;
    printf("Enter the number of array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }        
    }
    for(i=0;i<n;i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%d ",a[i][j]);
        } 
        printf("\n");      
    }
    for(i=0;i<n;i++)
    {
        row=0,col=0;
        for ( j = 0; j < n; j++)
        {
            row=row+a[i][j];
            col=col+a[j][i];
        } 
        printf("\n row=%d, col=%d",row,col);       
    }
    
    getch();
}