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
              int i;
	fp=fopen("EMP1.txt","r+");
	
	printf("\n THE RECORDS ARE :-"); 
	
	for(i=0;i<n;i++){
	   fscanf(fp,"%s%d",&a[i].ename,&a[i].age);
	   	   
       printf(" \n NAME = %s , AGE = %d ",a[i].ename,a[i].age);
    }
	fclose(fp);

}

void writefile(struct emp a[],int n){
	FILE *fp;
	int i;
	fp=fopen("EMP.txt","w+");
    printf("\n ENTER NAME AND AGE OF EMPLOY :-\n");  
	for(i=0;i<n;i++){
      
                scanf("%s %d",a[i].ename,&a[i].age);
	  fprintf(fp,"\n%s%d",a[i].ename,a[i].age);
      }
}

//quick sort fuction
void QSORT(struct emp x[],int low,int high){
	       
		   struct emp temp,pivote;
		   int down,up;
		   
		   if(low<high){
			   up=high;
			   down=low+1;
			   pivote=x[low];
			   
			   while(down<up){
				     while(x[down].age<pivote.age)
					       down++;
				     while(x[up].age>pivote.age)
                           up--;
                     
                     if(down<up){
                        temp=x[down];
                        x[down]=x[up];						
                        x[up]=temp;
					 }
			   }
			   //changing
               x[low]=x[up];
               x[up]=pivote;
			   
               //function calling
			   QSORT(x,low,up-1);
			   QSORT(x,up+1,high);
		   }
}

 main()
{
struct emp a[10]; 
int n,i;
printf("\n Enter value of n");
scanf("%d",&n);
writefile(a,n);
QSORT(a,0,n-1);
readfile(a,n);
getch();
return(0);
}



