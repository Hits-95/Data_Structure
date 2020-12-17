#include<stdio.h>
#include<conio.h>
#include<string.h>

struct nm{char*name;};
 int partition(struct nm x[],int lb,int ub)
 {
  int dn,up;
   char *pivot,*temp;
  dn=lb+1;
  up=ub;
  pivot=x[lb].name;
  do
  {
   while(strcmp(x[dn].name,pivot)<0)
   dn++;

   while(strcmp(x[up].name,pivot)>0)
   up--;
   if(dn<up)
   {
    temp=x[dn].name;
    x[dn].name=x[up].name;
    x[up].name=temp;
   }
   }while(dn<up);

   x[lb].name=x[up].name;
   x[up].name=pivot;
   return(up);
 }
  void qsort(struct nm x[],int lb,int ub)
 {
 int j;
  if(lb<ub)
  {
   j=partition(x,lb,ub);
   qsort(x,lb,j-1);
   qsort(x,j+1,ub);
  }
 }

  main()
 {
 int n;
 struct nm x[100];
 
   printf("\n Enter how many name = ");
  scanf("%d",&n);
  printf("\n Enter a %d numbers ",n);
  for(int i=0;i<n;i++)
  {
   scanf("%s",x[i]);
  }
  qsort(x,0,n-1);
  printf(" \n The bubble sort are \n");
  for(int i=0;i<n;i++)
  printf("%s\n",x[i]);
  getch();
  return(0);
 }

