#include<stdio.h>
#include<conio.h>
 
  void main() {
	  
	  int x[10],i,j,n,key;
	  clrscr();
	  
	 //INPUT
	  printf("\n Enter value of n = ");
	  scanf("%d",&n);
	  
	  printf("Enter %d values ",n);
	  for(i=0;i<n;i++){
		 scanf("%d",&x[i]);
	    } 
		
	 //PROCESS
      for(i=1;i<n;i++){
	  key=x[i];
          for(j=i-1;j>=0 && x[j]>key;j--){
	      x[j+1]=x[j];
	     }
	     x[j+1]=key;
	 }

     //OUTPUT
      printf("\n The insertion sort result is = ");
	    for(i=0;i<n;i++){
		printf("\n%d",x[i]);
	       }
     getch();

  }
