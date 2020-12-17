//QSORT ON STRING


#include<stdio.h>
#include<conio.h>
#include<string.h>
struct emp
{
char ename[10];
int age;
}temp;
void readfile(struct emp a[],int n)
{
	FILE *fp;
int	i;
	fp=fopen("input.txt","r+");
	printf("\n THE RECORDS ARE :-");
	for(i=0;i<n;i++)
	{
	  fscanf(fp,"%s%d",&a[i].ename,&a[i].age);
      printf(" \n NAME = %s , AGE = %d ",a[i].ename,a[i].age);
      }
	fclose(fp);

}
void fileresult(struct emp a[],int n)
{
    FILE *fp;
    int i;
    fp=fopen("output.txt","w+");

    for(i=0;i<n;i++)
        fprintf(fp,"\n %s %d",a[i].ename,a[i].age);
}
void writefile(struct emp a[],int n)
{
	FILE *fp;
	int i;
	fp=fopen("input.txt","w");
    printf("\n FRIENDS ENTER NAME AND AGE OF EMPLOY :-\n");  
	for(i=0;i<n;i++)
      {
      
      scanf("%s %d",a[i].ename,&a[i].age);
	  fprintf(fp,"%s\n%d\n",a[i].ename,a[i].age);
     }
  }
 void quicksort(struct emp x[],int low,int high)
 {
 	int up,down;
 	struct emp temp,pivote;
 	if(low<high)
 	{
 		up=high;
 		down=low+1;
 		pivote=x[low];
 		
 		do
 		{
 			while(strcmp(x[down].ename,pivote.ename)<0)
 			down++;
 			while(strcmp(x[up].ename,pivote.ename)>0)
 			up--;
 			
 			if(down<up)
 			{
 			temp=x[down];
 			x[down]=x[up];
			x[up]=temp;
            }
		}while (down<up);
		    x[low]=x[up];
			x[up]=pivote;
			
			quicksort(x,low,up-1);
			quicksort( x,up+1,high);
			
			
	} 
 }
 
  



 main()
{
struct emp a[10]; 
int n,i;
printf("\n friends enter value of n");
scanf("%d",&n);
writefile(a,n);
quicksort(a,0,n-1);
readfile(a,n);
fileresult(a,n);
getch();
return(0);
}



