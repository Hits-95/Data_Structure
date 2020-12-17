#include<stdio.h>
#include<conio.h>
#include<malloc.h>

typedef struct Node{
                 int data;
                 struct Node *next;
}*NODEPTR;

#define NODEALLOC (struct Node *) malloc (sizeof(struct Node))

//Add New Number Function
NODEPTR Add(NODEPTR rear){
          NODEPTR newnode;
       
          newnode=NODEALLOC;
          printf("\n\t\t Enter a number=>");
		  scanf("%d",&newnode->data);
       
          if(rear==NULL){
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

void Dis(NODEPTR rear){
	   NODEPTR temp;
	   temp=rear->next;
	   while(temp->next!=rear->next){
	   	printf("\n%d",temp->data);
	   	temp=temp->next;
	   }
	   printf("\n%d",temp->data);
}

int main(){
	NODEPTR rear=NULL;
	int c=1;
	while(c<4){
	rear=Add(rear);
	c++;
	}
	Dis(rear);
	getch();
	return(0);
}
