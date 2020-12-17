#include<stdio.h>
#include<conio.h>

 void selectionsort(int x[],int n){
                     int temp,pass,i;
                     
                     for(pass=0;pass<n;pass++){
                         for(i=pass+1;i<n;i++){
                             if(x[i]<x[pass]){
                                 temp=x[i];
                                 x[i]=x[pass];							 
	                   x[pass]=temp;
		 }
     	            }
	      }
       }

 int main(){
	 int a[10],n;
	 
	 printf("How many no are enter ? = ");
	 scanf("%d",&n);
	 printf("\n Eneter %d no",n);
	 for(int i=0;i<n;i++){
	     scanf("%d",&a[i]);
	 }
	 selectionsort(a,n);
	 printf("\n The selection sort are :-\n");
	 for(int i=0;i<n;i++){
	     printf("%d\n",a[i]);
	 }
	 getch();
    }
