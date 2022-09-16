  #include<stdio.h>
  #include<conio.h>
  void main()
  {
   int a[100],i,j,n,temp,min;
   printf("emter the size of array");
   scanf("%d",&n);
   printf("enter the array elements");
   for(i=0; i<n; i++)
    {
     scanf("&d", &a[i]);
    }
   for(i=0; i<n-1; i++)
    {
     min=i;
    }
   for(j=i+1; j<n; j++)
    {
     if(a[min]>a[j])
      {
       min=j;
      }
    }
  if(min!=j)
   {
    temp=a[i];
    a[i]=a[min];
    a[min]=temp;
   }
  printf("the sorted array are");
  for(i=0; i<n; i++)
   {
    printf("%d",a[i]);
   }
   getch();
}
