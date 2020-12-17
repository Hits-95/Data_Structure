#include<stdio.h>
#include<conio.h>

/* void isort(int x[],int n)
 {
   int spon,upon,newelement;
   for(upon=1;upon<n;upon++)
   {
     newelement=x[upon];
     for(spon=upon-1;x[spon]>newelement && spon>=0;spon--)
     {
       x[spon+1]=x[spon];
     }
      x[spon+1]=newelement ;
   }
 }*/
 main()
 {
 int x[10],n;
  clrscr();
  printf("\n Enter how many no`s = ");
  scanf("%d",&n);
  printf("\n Enter a %d numbers ",n);
  for(int i=0;i<n;i++)
  {
   scanf("%d",&x[i]);
  }
 // isort(x,n);
  int spon,upon,newelement;
   for(upon=1;upon<n;upon++)
   {
     newelement=x[upon];
     for(spon=upon-1;x[spon]>newelement && spon>=0;spon--)
     {
       x[spon+1]=x[spon];
     }
      x[spon+1]=newelement ;
   }
  printf(" \n The bubble sort are \n");
  for(i=0;i<n;i++)
  printf("%d\n",x[i]);
  getch();
  return(0);
}