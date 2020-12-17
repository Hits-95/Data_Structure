#include<stdio.h>
#include<conio.h>
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
    printf("\n FRIENDS YOUR RESULT BECOMES :- \n");
    for(i=0;i<n;i++){
         printf("\n name = %s  age =%d ",a[i].ename,a[i].age);
        fprintf(fp,"\n %s %d",a[i].ename,a[i].age);
    }
}
void writefile(struct emp a[],int n)
{
	FILE *fp;
	int i;
	fp=fopen("input.txt","w+");
    printf("\n FRIENDS ENTER NAME AND AGE OF EMPLOY :-\n");  
	for(i=0;i<n;i++)
      {
      scanf("%s %d",a[i].ename,&a[i].age);
	  fprintf(fp,"\n%s%d",a[i].ename,a[i].age);
      }
}


 partition (struct emp x[],int low,int high){
	  int down,up;
	  struct emp temp,pivote;
	  
	  
		  pivote=x[low];
		  down=low+1;
		  up=high;
		  do{
			  while(x[down].age<pivote.age)
				  down++;
			  while(x[up].age>pivote.age)
				  up--;
			  if(down<up){
				  temp=x[up];
				  x[up]=x[down];
				  x[down]=temp;
			  }
		  }while(down<up);
		  x[low]=x[up];
		  x[up]=pivote;
		  return(up);
		  
}

void qsort(struct emp x[],int low,int high){
	     int j;
		 if(low<high){
			 j=partition(x,low,high);
			 qsort(x,low,j-1);
			 qsort(x,j+1,high);
		 }
}
			  


 main()
{
struct emp a[10]; 
int n,i;
printf("\n friends enter value of n");
scanf("%d",&n);
writefile(a,n);  readfile(a,n);
qsort(a,0,n-1);

fileresult(a,n);
getch();
return(0);
}




