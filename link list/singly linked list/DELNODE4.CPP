
#include<conio.h>
#include<stdio.h>
#include<alloc.h>

  struct node {    
	         int data; 	  
	        struct node *next;
        };
typedef struct node *NODEPTR ;

#define NODEALLOC (struct node *) malloc (sizeof(struct node))

NODEPTR createlist(){
		 NODEPTR slist=NULL,temp,newnode;
		 int n,count;

		 printf("\n How many node are create = ");
		 scanf("%d",&n);

		 for(count=0;count< n;count++){
		    newnode=NODEALLOC;
		    printf("Enter a data value = ");
		    scanf("%d",&newnode->data);
		    newnode->next=NULL;

		    if(slist==NULL) {
		      slist=newnode;
		      temp=newnode;
		     }
		    else{
			temp->next=newnode;
			temp=newnode;

			}
		   }
		 return(slist);
	     }


//DELETE FROM BETWEENs
NODEPTR deletebet(NODEPTR slist,int pos){
		 NODEPTR temp=slist,temp1;
		 for(int i=1;i<pos-1;i++){

		     temp=temp->next;
		    }
		 temp1=temp->next;
		 temp->next=temp1->next;
		 free(temp1);
		 return(slist);
                }

void display(NODEPTR slist){

	       printf("\n THE RESULT ARE = \n\n");

	       while(slist!=NULL){
		     printf("%d\t",slist->data);
		     slist=slist->next;
		   }
	      } 


main()
   
  {
  NODEPTR slist;
  int pos;
  clrscr();
  slist = createlist();
  
 // display(slist);
    display(slist);

   printf("\n Which position node is delete\n");
   scanf("%d",&pos);

   deletebet(slist,pos);
   
   display(slist);
  getch();
  return(0);
 }
