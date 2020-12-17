#include<stdio.h>
#include<conio.h>
#include<malloc.h>


struct node{
      int data;
      struct node *next;
	  struct node *prev;
};

typedef struct node *NODEPTR ;
NODEPTR dlist=NULL;
#define NODEALLOC (struct node *) malloc (sizeof(struct node))

//CREATE DOUBLY LINKED LIST FUNCTION
NODEPTR CREATEDLIST(){
		 NODEPTR dlist=NULL,temp,newnode;
		 int n,count;

		 printf("\n\t\t How many node are you create = ");
		 scanf("%d",&n);
		 printf("\n");

		 for(count=0;count< n;count++){
		     newnode=NODEALLOC;
		     printf("\t\tEnter a data value = ");
		     scanf("%d",&newnode->data);
		     newnode->next=NULL;
			 newnode->prev=NULL;

		     if(dlist==NULL) {
			    dlist=newnode;
			    temp=newnode;
		     }
		     else{
	
			    temp->next=newnode;
			    	newnode->prev=temp;
			    temp=newnode;
		     }
		 }
		 return(dlist);
}

//DISPALY DOUBLY LINKED LIST FUNCTION
void DISPLAY() {
		     
		     printf("\n THE RESULT ARE :-");
		     NODEPTR temp=dlist;
		     printf("\n\t\t");
		     while(temp!=NULL){
			  printf("%d\t",temp->data);
			  temp=temp->next;
		     }
}

int main(){
	    
	     CREATEDLIST();
		  DISPLAY(dlist);
		  getch();
		  return(0);
	
}

