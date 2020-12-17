#include<stdio.h>
#include<conio.h>
#include<string.h>

struct emp{
	int id,age;
	char name[10];
};

void wright(struct emp a[],int n){
         printf("\n ENTER %d RECORDS OF EMPLOY :-\n ID,NAME,AGE = \n ",n);
         for(int i=0;i<n;i++)
            scanf("%d%s%d",&a[i].id,a[i].name,&a[i].age);
}
 		 
void read (struct emp a[], int n){
	printf("\nTHE SORTED RECORDS ARE :-\nTHE");
           for(int i=0;i<n;i++)	
	printf("ID=%d\tNAME=%s\tAGE=%d\n",a[i].id,a[i].name,a[i].age);
}
 
//quick sort
  partition(struct emp x[],int low,int high){
            int down=low+1,up=high;
            struct emp pivote=x[low],temp;
			
              do{
	  while(strcmp(x[down].name,pivote.name)<=0)
                    down++;
	  while(strcmp(x[up].name,pivote.name)>=0)
                   up--;
                if(down<up){
                   temp=x[down];
                   x[down]=x[up];
                   x[up]=temp;
                 }
               }while(down<up);
                 x[low]=x[up];
                 x[up]=pivote;
                 return(up);
     }

void QSORT(struct emp x[],int low,int high){
           int j;
            if(low<high){
               j=partition(x,low,high);
               QSORT(x,low,j-1);
	 QSORT(x,j+1,high);
             }
}

int main(){
	      
        struct emp x[10];
        int n;
        printf("\n HOW M,ANY RECORDS ASRE YOU INSERT ");
        scanf("%d",&n);
		  
        wright(x,n);
        QSORT(x,0,n-1);
        read(x,n);
        getch();
        return 0;
}
