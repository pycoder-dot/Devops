#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],b[10],c[10],i,k,sum,l;
printf("Enter nnn the array length:\n");
scanf("%d",&l);

printf("\nEnter the first array:\n");
for(i=0; i<l; i++)
 {
  scanf("%d",&a[i]);
 }
 printf("\nEnter the second array:\n");
 for(i=0; i<l; i++)
  {
   scanf("%d",&b[i]);
  }
  for(k=0; k<l; k++)
   {
    c[k]=a[k]+b[k];
   }
printf("\nThe sum of array:\n");
for(i=0; i<l; i++)
 {
  printf("%d\t",c[i]);
 }
 getch();
 }
