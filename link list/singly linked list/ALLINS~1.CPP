//HIT`s

#include<stdio.h>
#include<conio.h>
#include<malloc.h>


struct node{
      int data;
      struct node *next=NULL;
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

    //insert all tecnics
    NODEPTR insert(NODEPTR slist,int n1,int n2,int n3,int pos){
		      NODEPTR newnode,temp;
			  //beginig
		      newnode=NODEALLOC;
		      newnode->data=n1;
		      newnode->next=slist;
		      slist=newnode;
			  newnode=NULL;

			  //between
			  temp=slist;
		      for(int i=1;i<pos-1;i++){
				  temp=temp->next;
			    }
			  newnode=NODEALLOC;
			  newnode->data=n2;
			  newnode->next=temp->next;
			  temp->next=newnode;
			  newnode=NULL;

			  //end
			  while(temp->next!=NULL){
				     temp=temp->next;
				}
			  newnode=NODEALLOC;
			  newnode->data=n3;
			  newnode->next=NULL;
			  temp->next=newnode;
			  return(slist);
	        }

  //DISPLAY

  void redisplay(NODEPTR slist){
		if(slist != NULL){
		   printf(" %d\t",slist->data);
		   redisplay(slist=slist->next);
		}
	    }


 main()
  {
  NODEPTR slist;
  int n1,n2,n3,pos;
  
  slist = createlist();
 // display(slist);
  redisplay(slist);

  printf("\n which number is insert in begining = ");
  scanf("%d",&n1);

  printf("\n which number is insert in between = ");
  scanf("%d",&n2);
  printf("\n Which position");
  scanf("%d",&pos);
  printf("\n which no is insert in end = ");
  scanf("%d",&n3);


  slist=insert(slist,n1,n2,n3,pos);
  redisplay(slist);
  getch();
  return(0);
 }
