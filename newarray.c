#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10],b[10],i,j;
 printf("enter the first array");
 for(i=0; i<10; i++)
   {
      scanf("%d",&a[i]);
   }
  printf("enter the second array");
  for(i=0; i<10; i++)
   {
    scanf("%d",&b[i]);
   }
  printf("the first array is");
   for(i=0; i<10; i++)
   {
    printf("%d",a[i]);
    {
     printf("\n");
    }
   }
  printf("the second array is");
   for(i=0; i<10; i++)
   {
     printf("%d",b[i]);
     {
      printf("\n");
     }
   }
    getch();
}



