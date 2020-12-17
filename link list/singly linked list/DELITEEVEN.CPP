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

 
 //DELITE ALL EVEN NUMBERS IN LIST
 NODEPTR DELEVEN(NODEPTR slist){
 	
 	NODEPTR temp1=slist,temp2;
 	
 	while(temp1){
 	        //FOR BEGINING
 	     if(temp1->data%2==0&&temp1==slist){
 	        temp2=temp1;	
 	        temp1=temp1->next;
 	        slist=temp1;
 	        free(temp2);
 	   
	      }       //FOR BETWEEN
	      else  if((temp1->data % 2==0)&&(temp1->next!=NULL)){
                             temp1=temp1->next;
	 	 free(temp2->next);
		 temp2->next=temp1;	      	
                           }      //end
		else if((temp1->data % 2==0)&&(temp1->next==NULL)){
	             	        temp2->next=NULL;
	             	        free(temp1);
	             	        temp1=temp2->next;
	             	      
	                   }
		     else{
		      temp2=temp1;
		      temp1=temp1->next;
		}  
	     
	 }
	 
	 return(slist);
 }
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
	       NODEPTR temp;
	       temp=slist;

	       while(temp!=NULL){
		     printf("%d\t",temp->data);
		     temp=temp->next;
		   }
	      } 

 
 //MAIN
  int main(){
          NODEPTR slist,t;
                  
          slist=createlist();
          display(slist);
          
         t=DELEVEN(slist);
         display(t);
          
          getch();
          return(0);
  }
