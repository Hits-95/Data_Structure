 #include<stdio.h>
 #include<conio.h>

 void isort(int x[],int n)
 {
  int y,upos,spos ,newelement;
   upos =1;
  y: newelement=x[upos];
   spos=upos-1;
   while(x[spos]>newelement && spos>=0)
   {
    x[spos+1]=x[spos];
    spos=spos-1;
   }
   x[spos+1]=newelement;
   upos++;
   if(upos<n)
   goto y;
  }

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
  isort(x,n);
  printf(" \n The bubble sort are \n");
  for(i=0;i<n;i++)
  printf("%d\n",x[i]);
  getch();
  return(0);
}