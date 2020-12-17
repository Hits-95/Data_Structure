
#include<stdio.h>
#include<conio.h>

struct book
{
  char bname[10];
  int price;
  int publication;
 };


void bubblesort(struct book a[],int n)
{
  int pass,i;
  struct book t;
  for(pass=1;pass<n;pass++)
  {
   for(i=0;i<=n-1-pass;i++)
   {
    if(a[i].price>a[i+1].price)
    {
       t=a[i];
       a[i]=a[i+1];
       a[i+1]=t;
    }
   }
  }
 }

 main()
 {

  int n;
  struct book x[10];
  clrscr();
  printf("\n Enter how many no`s = ");
  scanf("%d",&n);
  printf("\n Enter a %d book name \n price \n publication numbers ",n);
  for(int i=0;i<n;i++)
  {
   scanf("%s",x[i].bname);
   scanf("%d",&x[i].price);
   scanf("%d",&x[i].publication);
  }
  bubblesort(x,n);
  printf(" \n The bubble sort are \n");
  for(i=0;i<n;i++) {
  printf("%s\t",x[i].bname);
  printf("%d\t",x[i].price);
  printf("%d\n",x[i].publication);
  }
  getch();
  return(0);
 }