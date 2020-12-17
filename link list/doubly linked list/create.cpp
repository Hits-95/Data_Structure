#include<stdio.h>
#include<conio.h>
#include<malloc.h>

 struct node{
            int data; 
            struct node *prev;
            struct node *next;
        };

 typedef struct node *NODEPTR;        /*  typedef struct{
	                                         node*Node ;
                                          }NODEPTR;     */
 #define NODEALLOC ( struct node *)malloc(sizeof( struct node))
 
 //CREATE FUNCTION
            
 NODEPTR CREATELIST(){
                  NODEPTR dlist=NULL,temp,newnode; 
	    int n,count;
			   
	     printf("\n HOW MANY NODE ARE CREATE ? = ");
	     scanf("%d",&n);
			   
	     for(count=0;count<n;count++){
	         newnode=NODEALLOC;
	         printf("\n ENTER DATA");
	         scanf("%d",&newnode->data);
	         newnode->prev=NULL;
	         newnode->next=NULL;
  
                       if(dlist=NULL){
	           dlist=newnode;
	           temp=newnode;
	         }
	        else{
	            temp->next=newnode;
	            newnode->prev= temp;
	            temp=newnode;
	         }
                    }
	      return(dlist);
    }
//DISPLAY LIST	
  void DISPLAYLIST(NODEPTR dlist){
                  printf("\n"); 
                  NODEPTR temp=dlist;
	              while(temp->next){
	                printf("%d\t",temp->data);
                       temp=temp->next;			  
                  }
             }
        
        
  main(){
     NODEPTR dlist=NULL;
	
     dlist = CREATELIST();
	   DISPLAYLIST(dlist);
	getch();
	return(0);
 }
	
				   
				   
			   
