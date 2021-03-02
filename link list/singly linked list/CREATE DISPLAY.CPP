//HIT`s

#include<stdio.h>
#include<conio.h>
#include<malloc.h>


struct node{
        int data;
        struct node *next;
};
typedef struct node *NODEPTR ;

#define NODEALLOC (struct node *) malloc (sizeof(struct node))

 NODEPTR CREATELIST(){
	
     NODEPTR slist=NULL,temp,newnode;
	    int n,count;
 
                  printf("\n How many node are create = ");
	    scanf("%d",&n);
                  for(count=0;count< n;count++){
	        newnode=NODEALLOC;
	        printf("Enter a data value = ");
	        scanf("%d",&newnode->data);
	    
	        if(slist==NULL) {
	           slist=newnode;
	           temp=newnode;
	           temp->next=newnode;  
	        }
	        else{
	           newnode->next=temp->next;
	           temp->next=newnode;
	           temp=newnode;
	         
                      }
	    }
                  return(slist);
 }

//DIAPLAY FUNCTION
 void DISPLAY(NODEPTR slist){
 	
 	NODEPTR temp=slist;
 	printf("\n");
 	while(temp->next!=slist){
 	      printf("\t%d",temp->data);
 	      temp=temp->next;
 	}
 	printf("\t%d",temp->data);
 }
 
 //MAIN
  int main(){
          NODEPTR slist;
                  
          slist=CREATELIST();
          DISPLAY(slist);
                
          getch();
          return(0);
  }
