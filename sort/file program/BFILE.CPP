/* HIT`S*/
#include<conio.h>
#include<stdio.h>
void read(int a[],int n){
         FILE *fp;
         int i=0;
         fp=fopen("nos1.txt","r");
         while(!feof){
               fscanf(fp,"%d",&a[i]);
               i++;
         }
         for(int j=0;j<5;j++)
            printf("\n\t %d ",a[j]);

         fclose(fp);
}
void display(int a[],int n){
          FILE *fp;
          fp=fopen("nos2.txt","w");
		  fprintf(fp," \n The bubble sort are \n");
          for(int i=0;i<n;i++)
              fprintf( fp,"%d",a[i]);
              printf("\n\n");
          for(int j=0;j<5;j++)
            printf("\n\t %d ",a[j]);
 }


void bubblesort(int x[],int n)
{
 int t ,pass,i,flg;
 for(pass=1;pass<n;pass++)
 {
  flg=0;
   for(i=0;i<=n-1-pass;i++)
    {
    if(x[i]>x[i+1])
    {
     t=x[i];
     x[i]=x[i+1];
     x[i+1]=t;
     flg=1;
    }
   }
   if(pass<n&&flg==0)
   break;
  }
 }
 
  main()
 {
 int a[10],n;
  printf("\n Enter how many no`s = ");
  scanf("%d",&n);
  read(a,n);
   bubblesort(a,n);
   display(a,n);
    getch();
  return(0);
 }

