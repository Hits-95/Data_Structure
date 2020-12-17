//HIT`s

#include<stdio.h>
#include<conio.h>
#include<alloc.h>


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

  //my invention fuction
 /* void dispaly(NODEPTR slist) {
		 printf("\n THE RESULT ARE = \n\n");

		 while(slist!=NULL){
		      printf("\n%d",slist->data);
		      slist=slist->next;
		    }
	     }    */


 /*  void display(NODEPTR slist){

	       printf("\n THE RESULT ARE = \n\n");
	       NODEPTR temp;
	       temp=slist;

	       while(temp!=NULL){
		     printf("%d\t",temp->data);
		     temp=slist->next;
		   }
	      }    */

  void redisplay(NODEPTR slist)
  {
    if(slist != NULL)
    {
    printf(" %d\t",slist->data);
    redisplay(slist=slist->next);
    }
    }
    //insert at begining
    NODEPTR insertbeg(NODEPTR slist,int n){
		      NODEPTR newnode;
		      newnode=NODEALLOC;
		      newnode->data=n;
		      newnode->next=slist;
		      slist=newnode;
		      return(slist);
		   }



  main()
  {
  NODEPTR slist;
  int n;
  clrscr();
  slist = createlist();
 // display(slist);
  redisplay(slist);

  printf("\n which number is insert in begining\n");
  scanf("%d",&n);

  slist=insertbeg(slist,n);
  redisplay(slist);
  getch();
  return(0);
 }
