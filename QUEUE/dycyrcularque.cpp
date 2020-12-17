#include<stdio.h>
#include<conio.h>
#include<malloc.h>

typedef struct Node{
                 int data;
                 struct Node *next;
}*NODEPTR;

#define NODEALLOC (struct Node *) malloc (sizeof(struct Node))

//Is Empty function
int isEmpty( NODEPTR rear){
      if(rear==NULL)
        return(1);
      else
        return(0);
}

//Add New Number Function
 NODEPTR Add(NODEPTR rear){
          NODEPTR newnode;
       
          newnode=NODEALLOC;
          printf("\n\t\t Enter a number=>");
		  scanf("%d",&newnode->data);
       
          if(isEmpty(rear)){
       	      rear=newnode;
			  rear->next=newnode;
		  }
	      else{
	   	    newnode->next=rear->next;
	   	    rear->next=newnode;
	   	    rear=newnode;
	      }
	      return(rear);
}
	
//Delete Number fnction
 void Dell( NODEPTR rear){
       NODEPTR temp;
       
       if(isEmpty(rear)){
       	   printf("\n\t\t Queue is Empty");
	   }
	   else{
	     temp=(rear->next)->next;
	     printf("\n\t\t The %d Number is Deleted",(rear->next)->data);
	     free(rear->next);
	     rear->next=temp;
	   }
 }

//Display Function
void Display( NODEPTR rear){
	   NODEPTR temp;
	   printf("\n\t");
	   if(isEmpty(rear)){
           printf("\n\t\t Queue is Empty");
	   }
	   else{
	   	 temp=rear->next;
	     while(temp->next!=rear->next){
	   	   printf("\t %d",temp->data);
	   	   temp=temp->next;
	     }
	     printf("\t%d",temp->data);
       }
}

int main(){
	  int ch,n;
	  NODEPTR rear=NULL;
	  
	  while(1){
	  	printf("\n\n\t\t MENU->\n\t----------------------------------------");
		printf("\n\t\t 1: Add number");
		printf("\n\t\t 2: Delete number");
		printf("\n\t\t 3: Display list");
		
		printf("\n\n\t\t Enter your choice=>");
		scanf("%d",&ch);
		
		switch(ch){
		  case 1:rear=Add(rear);
				 break;
		  case 2:Dell(rear);
                 break;
          case 3:Display(rear);
		         break;
	    }
	  }	
	 return(0);
     getch();
}