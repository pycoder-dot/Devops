#include<stdio.h>
#include<conio.h>
void main()
{
int a[5];
int i,sum=0;
printf("enter vv the array elements");
for(i=0; i<5; i++)
 {
  scanf("%d",&a[i]);
 }
  for(i=0; i<5; i++)
  {
   sum=sum+a[i];
  }
printf("the sum of array is");
   printf("sum:%d \n",sum);
  getch();
  }
