#include<stdio.h>
#include<conio.h>

//PROCESS
void  qsort(int x[],int lb ,int ub){
	
       int pivot,t,dn,up;
	   
       if(lb<ub){		   	   
          dn=lb+1;
          pivot=x[lb];
          up=ub;
	   
          do{
		   
             while(x[dn]<pivot && dn<=ub)
                  dn++;
             while(x[up]>pivot && up>lb)
                  up--;

             if(dn<up) {
                t=x[up];
                x[up]=x[dn];
                x[dn]=t;
             }
         }while(dn<up);
		
          x[lb]=x[up];
          x[up]=pivot;
      qsort(x,lb,up-1);
      qsort(x,up+1,ub);
    }
}

//READ ARRAY(INPUT)		
 void readarray(int x[],int n){
	 
                 printf("\n Enter %d nno`s",n);
                 for(int i=0;i<n;i++){
                     scanf("%d",&x[i]);
                    }
                }
//DISSPAY ARRAY (OUTPUT)
  void display(int x[],int n){
	  
                 printf("\n The sort no`s are = \n");
                 for(int i=0;i<n;i++){
                     printf(" %d\n",x[i]);
                    }
                }

int main() {
	
         int a[10],n;
          
         printf("\n How many no`s are you enter ");
         scanf("%d",&n);
		 
         readarray(a,n);
         qsort(a,0,n-1);
         display(a,n);
		 
         getch();
         return(0);
        } 
