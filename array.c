#include<stdio.h>
#include<conio.h>
void main()
{
 int A [4], sum=0;
 int i,j,k;
 printf("write the four elements of array A");
 for(i=0; i<4; i++)
 {
  scanf("%d",&A[i]);
 }
  for(j=0; j<4; j++)
  {
  printf("A(%d)=%d,",j,A[j]);
  }
  for(k=0; k<4; k++)
  {
  sum+=A[k];
  printf("\n sum=%d\n",sum);
  }
  getch();
}
