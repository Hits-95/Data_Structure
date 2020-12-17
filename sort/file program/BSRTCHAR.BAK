#include<stdio.h>
#include<conio.h>

struct book
{
  char *bname;
  int price,publication;
};

void bubblesort(struct book a[],int n)
{
  int pass,i,t,t2;

  for(pass=1;pass<n;pass++)
  {
   for(i=0;i<n-pass;i++)
   {
    if(a[i].price>a[i+1].price)
    {
	       t=a[i];
	    a[i]=a[i+1];
	  a[i+1]=t;

		   /* t2=a[i].publication;
      a[i].publication=a[i+1].publication;
      a[i+1].publication=t2;*/

    /*  strcpy(*s,a[i].bname);
      srrcpy(a[i].bname,a[i+1].bname);
      strcpy(a[i+1].bname,*s); */

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
  printf("\n Enter a %d records\n BOOK NAAME \n PRICE \n PUBLLICATION  ",n);
  for(int i=0;i<n;i++)
  {

   scanf("%d%d",&x[i].price,&x[i].publication);
  }
  bubblesort(x,n);
  printf(" \n The bubble sort are \n");
  for(i=0;i<n;i++)
  printf("%s ,%d ,%d \n",x[i].bname,x[i].price,x[i].publication);
  getch();
  return(0);
 }