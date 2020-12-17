#include<stdio.h>
#include<conio.h>

// Efficent bubble sort fuction
 void bsort(int x[],int n) {

         register int t ,pass,i;
		 int c=0,flg=1;
		 

         for(pass=1;pass<n&&flg==1;pass++){
             flg=0;
             for(i=0;i<=n-1-pass;i++)
                if(x[i]>x[i+1])
				{
	              t=x[i];
                  x[i]=x[i+1];
                  x[i+1]=t;
                  flg=1;
                }
                /*if(flg==0)
				{
                  count++;	
                  break;
                } */

           }
           printf("\t\t pass= %d",--pass);

}
 main(){

     int x[10],n;

     printf("\n Enter how many no`s = ");
     scanf("%d",&n);
     printf("\n Enter a %d numbers ",n);
     for(int i=0;i<n;i++){
         scanf("%d",&x[i]);
        }
     bsort(x,n);
     printf(" \n The bubble sort are \n");
     for(int i=0;i<n;i++)
         printf("\t%d",x[i]);
     getch();
     return(0);
    }
