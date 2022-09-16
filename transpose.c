#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10],t[10][10],m,n,i,j;
printf("enter the size of row and colum");
scanf("%d%d",&m,&n);
printf("enter the matrix elements");
printf("enter the matrix elements");
for(i=0; i<m; i++)
  {
   for(j=0; j<n; j++)
    {
     scanf("%d",&a[i][j]);
    }
  }
printf("the orignal matrix is");
for(i=0; i<m; i++)
  {
   for(j=0; j<n; j++)
    {
     printf("%d", a[i][j]);
    }
     printf("\n");
  }
   for(i=0; i<m; i++)
    {
     t[j][i]=a[i][j]
     }
 }
printf("the transpose matrix is");
 for(i=0; i<m; i++)
  {
   for(j=0; j<n; j++)
    {
     printf("%d",t[i][j]);
    }
     printf("\n");
    }
   getch();
}
