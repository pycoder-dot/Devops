#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10][10],d[10][10],i,j,m,n;
 printf("enter the size of row and colums");
 scanf("%d%d",&m,&n);
 printf("enter the matrix element");
 for(i=0;i<m; i++)
  {
   for(j=0; j<n; j++)
    {
     scanf("%d",&a[i][j]);
    }
  }
printf("the desired matrix is");
 for(i=0; i<m; i++)
  {
   for(j=0; j<n; j++)
    {
     printf("original matrix is %d",a[i][j]);
    }
     printf("\n");
  }
   for(i=0; i<m; i++)
    {
     for(j=0; j<n; j++)
      {
       if(i==j)
       {
        printf("%d",&d[i][j]);
       }
      }
     }
     getch();
 }
