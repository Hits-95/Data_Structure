//BINATY SEARCH

#include<stdio.h>
#include<conio.h>

int BINARYSEARCH(int x[],int low,int high,int key){
	  
				 
	      if(low<high){
	         mid=(low+high)/2;
	         
	         if(x[mid]==key)
	           return(mid);
                       else 
                          if(x[mid]<key)
                            BINARYSEARCH(x,mid+1,high,key);
	            else
		BINARYSEARCH(x,low,mid-1,key)
	   }
	   return(-1);
}			 

 void bsort(int x[],int n) {
	
         int t ,pass,i,flg;
         for(pass=1;pass<n;pass++){
             flg=0;
             for(i=0;i<=n-1-pass;i++){
                 if(x[i]>x[i+1]){
                    t=x[i];
                    x[i]=x[i+1];
                    x[i+1]=t;
                    flg=1;
                   }
     
                } 
             if(pass<n&&flg==0)
             break;
            } 
        }	  
 
 void READARRAY(int x[],int n){
                printf("\nENTER %d NUMBERS ",n);
                for(int i=0;i<n;i++)
                    scanf("%d",&x[i]);
 }			   
 
 void RESULT (int pos,int key){
	          if(pos==-1)
                           printf("\nTHE NUMBER %d IS NOT FOUND ",key);
	          else
                            printf("THE NUMBER %d IS FOUND AT %d POSITION",key,pos);	
			  
 }			  
 
 int main(){
	       int x[100],pos,n,key;
		   printf("\n HOW MANY NUMBERS ARE ENTER:-");
		   scanf("%d",&n);
		   READARRAY(x,n);
		   bsort(x,n);
		   printf("\n WHICH NUMBER IS SEARCH:-");
		   scanf("%d",&key);
		   pos = BINARYSEARCH(x,0,n-1,key);
		   RESULT(pos,key);
		   getch();
 }
