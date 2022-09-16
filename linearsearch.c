#include<stdio.h>
#include<conio.h>
void main()
{
 int a[20],n,search,i;
 printf("enter the size of array");
 scanf("%d",&n);
 printf("enter the value to be searched");
 scanf("%d",&search);
 printf("enter the array elements");
 for(i=0; i<n; i++)
  {
   scanf("%d",&a[i]);
  }
 for(i=0; i<n; i++)
  {
   if(a[i]==search)
   {
    printf("%d is present at location%d",search,i+1);
   } break;
  }
  if(n==i)
   {
    printf("searched element is not present in array");
   }
    getch();
 }
