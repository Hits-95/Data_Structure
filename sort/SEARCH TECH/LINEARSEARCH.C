//SEQUENSIAL/LINEAR SEARCH

#include<stdio.h>
#include<conio.h>

 LINEARSEARCH(int x[],int n,int key){
              for(int i=0;i<n;i++){
	    if(x[i]==key)
	      return (i+1);
	    }
              return(-1);
 }			  
 
 void READARRAY(int x[],int n){
                printf("\nENTER %d NUMBERS :-  ",n);
                for(int i=0;i<n;i++)
                    scanf("%d",&x[i]);
 }			   
 
 void RESULT (int pos,int key){
	     
	  if(pos==-1)
	     printf("\nTHE NUMBER %d IS NOT FOUND ",key);
	  else
                   printf("\n THE NUMBER %d IS FOUND AT %d POSITION",key,pos);	
			  
 }			  
 
 int main(){
	       int x[100],pos,n,key;
		   printf("\n HOW MANY NUMBERS ARE ENTER:- ");
		   scanf("%d",&n);
		   READARRAY(x,n);
		   printf("\n WHICH NUMBER IS SEARCH:-");
		   scanf("%d",&key);
		   pos = LINEARSEARCH(x,n,key);
		   RESULT(pos,key);
		   getch();
 }
