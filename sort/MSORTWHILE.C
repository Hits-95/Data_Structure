#include<stdio.h>
#include<conio.h>

//SORTTING
void MERGE(int x[],int low,int mid,int high){
           int i,j,k;
           int a[20];
		   
           i=low;
           j=mid+1;
           k=low;
		   
           while(i<=mid && j<=high){
                if(x[i]<x[j])
                   a[k++]=x[i++];
                else
                   a[k++]=x[j++];
            }
			
            while(i<=mid)
	 a[k++]=a[i++];
			 
			 
            while(j<=high)
          	 a[k++]=x[i++];
			 
			 
            for(i=low;i<=high;i++)
                x[i]=a[i];
    }			
	
   //DIVIDING
    void MSORT(int x[],int low,int high){
               int mid;
               if(low<high){
                 mid=(low+high)/2;
	   MSORT(x,low,mid);
	   MSORT(x,mid+1,high);
	   MERGE(x,low,mid,high);
               }
    }
	
    void WRIGHT(int a[],int n){
                printf("\n ENTER %d NUMBERSS\n ",n);
                for(int i=0;i<n;i++)
                    scanf("%d",&a[i]);
    }
 		 
    void READ (int a[], int n){
               printf("\n THE MERGE SORT ARE \n :-");
               for(int i=0;i<n;i++) 	
                  printf("\n %d \t",a[i]);
    } 

    int main(){
           int a[100],n;
		 
            printf("\n HOW MANY NUMBERS ARE YOU ENTERM ");
            scanf("%d",&n);
            WRIGHT(a,n);
            MSORT(a,0,n-1);
            READ(a,n);
            getch();
            return(0);
    }
		
