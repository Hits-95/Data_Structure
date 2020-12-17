#include<stdio.h>
#include<conio.h>

   main(){
	 
       int x[10],n,up,sp,newel;
       
       printf("\n Enter how many no`s = ");
       scanf("%d",&n);
       printf("\n Enter a %d numbers ",n);
       for(int i=0;i<n;i++){
           scanf("%d",&x[i]);
          }
		  
		//process
       up=1;
       hits: newel=x[up];
       sp=up-1;
       while(x[sp]>newel && sp>=0){
       	
	          x[sp+1]=x[sp];
	          sp=sp-1;
           }
       x[sp+1]=newel;
       up=up+1;
       if(up<n)
         goto hits;
	 
	  //display
      printf(" \n The insertion sort are \n");
      for(int i=0;i<n;i++)
          printf("%d\n",x[i]);
      getch();
      return(0);
    }
