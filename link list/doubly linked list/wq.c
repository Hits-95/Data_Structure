//HIT`s

#include<stdio.h>
#include<conio.h>

// BINARRY to DESIMAL convertion
 int BtoD(int n){
          int r,sum=0,mult=1;
          
          while(n>0){
               r=n%10;
                printf("%d\t",r);
	           sum=sum+(r*mult);
           	   mult= mult*2;
           	   printf("%d\t",n);
	           n=n/10; 
         }
         return(sum);
 }
 
  int main(){
          int n;
          
          printf("\n\t ENTER A BINARRY  NUMBER => ");
          scanf("%d",&n);
          printf("\n\t THE DESIMAL NUMBER is :- %d ",BtoD(n));
          getch();
          return (0);
}


