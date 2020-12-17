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

 

  void display(NODEPTR slist){

	       printf("\n THE RESULT ARE = \n\n");
	       NODEPTR temp=slist;

	       while(temp!=NULL){
		     printf("%d\t",temp->data);
		     temp=slist->next;
		   }
	      }    

 
 
/

  main()
  {
  NODEPTR slist;
  int n,c[100]={0};
  int max;
  
  slist = createlist();
  display(slist);
  
  FFREQUNCYCOUNT(slist,c);
  max=MAXIMUM(slist);
  FREQUNCYDISPLAY(slist,max);
  
  getch();
  return(0);
 }
