#include"stdio.h"
#include"conio.h"
#include"malloc.h"

struct node{
	int data;
	struct node *next,*prev;
};

typedef struct node  *NODEPTR;


NODEPTR createLi(NODEPTR dlist){
	int n,count;
	NODEPTR newnode,temp;
	temp = dlist;
	dlist = NULL;
	printf("\n\t How many nodes :-\t");
	scanf("%d",&n);

	for(count = 1; count <= n; count++){
        printf("\n\t Enter Node :\t");

		newnode = (struct node*) malloc(sizeof(struct node));

		scanf("%d",&newnode -> data);

		newnode ->next = NULL;
		newnode->prev = NULL;
        if(dlist == NULL){
            dlist = newnode;
            temp = newnode;
        }else{
            temp -> next = newnode;
            temp = newnode;
	    }
    }
	return(dlist);
}

 NODEPTR insBeg(NODEPTR dlist){
	NODEPTR temp,newnode;
	printf("\n\t Enter the newnode :\t");

	newnode = (struct node*) malloc(sizeof(struct node));

	scanf("%d",&newnode->data);

    newnode->next = dlist;
    dlist->prev = newnode;
    newnode->prev = NULL;
    dlist = newnode;

	return(dlist);
}


NODEPTR insEnd(NODEPTR dlist){
	NODEPTR temp,newnode;

	temp = dlist;
	while(temp->next != NULL)
		temp = temp->next;

	printf("\t Enter the newnode :\t");
	newnode = (struct node*) malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    newnode->next = NULL;
    newnode->prev = temp;
    temp->next = newnode;
    //dlist = newnode;

	return(dlist);
}

void disList(NODEPTR dlist){
	NODEPTR temp,newnode;

	temp = dlist;
	printf("\n\t list is :  ");

	while(temp!= NULL){

		printf(" %d",temp->data);
		temp = temp->next;
	}
}



NODEPTR insBet(NODEPTR dlist){
	int count = 1,pos;
	NODEPTR temp,newnode;
	temp = dlist;

	printf("Enter the position");
	scanf("%d",&pos);

	while(count < pos-1){
		temp = temp->next;
		count++;
	}
		printf("Enter newnode");

		newnode = (struct node*) malloc(sizeof(struct node));
		scanf("%d",&newnode->data);

		newnode-> prev = temp;
		newnode->next = temp->next;
		temp ->next = newnode;
		(newnode->next)-> prev = newnode;

	return(dlist);

}
NODEPTR delBeg(NODEPTR dlist){
		NODEPTR temp;
		temp = dlist;
		dlist = temp->next;
		dlist->prev = NULL;
		free(temp);
    return(dlist);
}

NODEPTR delEnd(NODEPTR dlist){
		NODEPTR temp;
	    temp = dlist;
		while(temp->next != NULL)
			temp = temp->next;

		(temp->prev)->next = NULL;
		free(temp);
	return(dlist);
}

NODEPTR delBet(NODEPTR dlist){
    NODEPTR  temp,temp1;
    int count ,pos;
    printf("\n\t Enter Position :\t");
    scanf("%d", &pos);
    for(count = 1; count < pos-1; count++)

	 return(dlist);
}


int main(){

	NODEPTR dlist,newnode;

	int choice,n,pos;
	dlist = createLi(dlist);
	disList(dlist);

	 do{
	 	printf("\n\t ***operation of Insertion ***");
	 	printf("\n\t 1  Insert begin");
	 	printf("\n\t 2  Insert End");
	 	printf("\n\t 3  Insert Between");
	 	printf("\n\t 4  Delete begin");
	 	printf("\n\t 5  Delete End");
	 	printf("\n\t 6  Delete  Between");

	 	printf("\n\t Enter your choice :-\t");
	 	scanf("%d",&choice);

	 	switch(choice){
	 		case 1: dlist = insBeg(dlist);
			        disList(dlist);
	 		break;

	 	    case 2: insEnd(dlist);
			 		disList(dlist);
	 		break;

	 		case 3: insBet(dlist);
			        disList(dlist);
	 		break;

	 		case 4: dlist = delBeg(dlist);
	 	    	    disList(dlist);
	 		break;

	 		case 5: dlist = delEnd(dlist);
			 		disList(dlist);
	 		break;

	 		case 6: delBet(dlist);
			 		disList(dlist);
	 		break;

		 }


	 }while(choice != 7);

	return(0);
}
