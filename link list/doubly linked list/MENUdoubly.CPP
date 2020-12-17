//HIT`s

//DOUBLY LINKED LIST

#include<stdio.h>
#include<conio.h>
#include<malloc.h>

struct node{
      int data;
      struct node *next;
	  struct node *prev;
};

typedef struct node *NODEPTR ;

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
		newnode->prev=temp;
			    temp->next=newnode;
			    temp=newnode;
		     }
		 }
		 return(dlist);
}

//DISPALY DOUBLY LINKED LIST FUNCTION
void DISPLAY(NODEPTR dlist) {
		     
		     printf("\n THE RESULT ARE :-");
		     NODEPTR temp=dlist;
		     printf("\n\t\t");
		     while(temp!=NULL){
			  printf("%d\t",temp->data);
			  temp=temp->next;
		     }
		     printf("\n");
		    // int MENU();
}

/* INSERT OPRATIONS */

//INSERT BEGINING
 NODEPTR INSERTBEGI(NODEPTR dlist){
 	NODEPTR temp;
 	
 	temp=NODEALLOC;
 	
	printf("\n\t\t WHICH NUMBER IS INSERT BEGINING :- ");
	scanf("%d",&temp->data);
	temp->next= dlist;
	dlist=temp;
	return(dlist);
 }

 //INSERT BETWEEN
 void INSERTBET(NODEPTR dlist){

		   NODEPTR temp=dlist,newnode;
		   int pos,i;

		   printf("\n\t\t WHICH POSITION ARE YOU INSERT NUMBER :-");
		   scanf("%d",&pos);

		   for(i=1;i<pos-1;i++)
		       temp=temp->next;

			   newnode=NODEALLOC;
		   printf("\n\t\t WHICH NUMBER IS INSERT :- ");
		   scanf("%d",&newnode->data);
		   newnode->prev=temp;
		   newnode->next=temp->next;
		   temp->next=newnode;
		   (newnode->next)->prev=newnode;

}

//INSERT END

void INSERTEND(NODEPTR dlist){
		  NODEPTR temp=dlist,newnode;

			  newnode=NODEALLOC;
			  newnode->next=NULL;

			  while(temp->next!=NULL)
			       temp=temp->next;

			  printf("\n\t\t WHICH NUMBER IS INSERT AT END :- ");
			  scanf("%d",&newnode->data);

			  temp->next=newnode;
			  newnode->prev=temp;

}

/* DELETE OPRATIONS */

// DELETE FROM BEGINING

NODEPTR DELBEGI(NODEPTR dlist){
		   NODEPTR temp=dlist;
		   dlist=temp->next;
		   dlist->prev=NULL;
		   free(temp);
		   return(dlist);

}

//DELETE FROM BETWEEN

void DELBET(NODEPTR dlist){
	       NODEPTR temp=dlist;
	       int pos;

	       printf("\n\t\t WHICH POSITION NUMBER IS DELETE :-");
	       scanf("%d",&pos);

	       for(int i=0;i<pos-1;i++)
		   temp=temp->next;

	   (temp->next)->prev=temp->prev;
		   (temp->prev)->next=temp->next;

		   free(temp);
}

//DELETE FROM END

void DELEND(NODEPTR dlist){
	       NODEPTR temp=dlist;

	       while(temp->next!=NULL)
		    temp=temp->next;

	       (temp->prev)->next=NULL;
		   free(temp);
}
//DELETE ALL LINIKD LIST
NODEPTR DellAll(NODEPTR dlist){
	      while(dlist=dlist->next)
			  free(dlist->prev);
		 free(dlist);
		 return(NULL);
}

//MENU
int MENU(){

	      printf("\n\n");
	      printf("1 create list\n");
	      printf("2 display list\n");
	      printf("3 insert begin\n");
	      printf("4 insert between\n");
	      printf("5 insert end\n");
	      printf("6 delete begin\n");
	      printf("7 delete between\n");
	      printf("8 delete end\n");
		  printf("9 delete all linked list\n");
	      printf("10 STOP\n");
	      return(0);
		}

main(){
	  NODEPTR dlist=NULL;
	  int ch,n,pos,a;

	  printf("\n\t\tWLE-COME TO DOUBLY LINKED LIST MENUDRIVANE PROGRAM FROM HIT`S\n");
	  printf("\n\t\tARE YOU INTRESTED TO SEE MENU ? \n\t\t\tIF YES THEN \n\t\t\tPRESS 1 other wise\n\t\t\tPRESS 2\n");
	  scanf("%d",&a);
	  if(a==1)
	    MENU();
	  else
	    goto q;

	  do	{

	   printf("\n\t\t Enter you choice  = ");
	   scanf("%d",&ch);

     switch(ch){


	   case 1 : dlist=CREATEDLIST();
		    printf("\n\t\t list is create HIT`S \n");
	   break;

	   case 2 :if(dlist)
	              DISPLAY(dlist);
	            else 
	               printf("\n \t LInke list is NULL");
		  	MENU();
	   break;

	   case 3 : dlist=INSERTBEGI(dlist);
		printf("\n\t\t value is insert HIT`S  \n ");
	   break;

	   case 4 : INSERTBET(dlist);
			printf("\n\t\t value is insert HIT`S  \n ");
	   break;

	   case 5 : INSERTEND(dlist);
			printf("\n\t\t value is insert HIT`S \n ");
	   break;

	   case 6 : dlist=DELBEGI(dlist);
			printf("\n\t\t value delete HIT`S \n ");
	   break;

	   case 7 : DELBET(dlist);
			printf(" \n\t\t value delete HIT`S  \n ");
	   break;

	   case 8 : DELEND(dlist);
			printf(" \n\t\t value delete HIT`S \n ");
	   break;
	   
	   case 9 :dlist=DellAll(dlist);
           printf("Total linked list is Delited\n");
      }
     }while(ch<10);
     q:return(0);
   }
