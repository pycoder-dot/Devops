#include<stdio.h>
#include<conio.h>
void main()
{
 int a[50],b[50],i,j,n,m;
 printf("the first array lenth");
 scanf("%d",&n);
 printf("the second array lenth");
 scanf("%d",&m);
 printf("enter the first array");
 for(i=0; i<n; i++)
  {
   scanf("%d",&a[i]);
  }
printf("enter the second array");
for(i=0; i<m; i++)
 {
  scanf("%d",&b[i]);
 }
printf("the first array is");
for(i=0; i<n; i++)
 {
  printf("%d\n",a[i]);
 }
printf("the second array is");
for(i=0; i<m; i++)
 {
  printf("%d\n",b[i]);
 }
 getch();
 }
