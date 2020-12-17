#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#define MAX 3

typedef struct{
	      int *data;
		  int rear;
		  int front;
}*Que;
Que pq;
/******* Function Body *********/
void InitilzeQue(){
       pq->rear=pq->front=-1;
       pq->data=malloc(sizeof(int)*MAX);//imp for represent circular queue
}
int IsEmpty(){
	  if(pq->rear==pq->front)
	    return (1);
	  else
	    return(0);
}
int IsFull(){
	   return((pq->rear+1)%MAX==pq->front);
     
}
void Add(int num){
	   pq->rear=(pq->rear+1)%MAX;
	   pq->data[pq->rear]=num;
}
int Remove(){
	  pq->front=(pq->front +1)%MAX;
	  return(pq->data[pq->front]);
}
/********* Main Body *********/
int main(){
	  int ch,num,i;
	  
	  InitilzeQue(pq);
	  do{
		  printf("\n\t\t MENU\n\t-------------------------------");
		  printf("\n\t\t 1:ADD");
		  printf("\n\t\t 2:REMOVE");
		  printf("\n\t\t 3:DISPLAY");
		  printf("\n\n\t\t 1:Enter your choich=>");
          scanf("%d",&ch);
          switch(ch){
               case 1: printf("\n\t\t Enter data ");
                       scanf("%d",&num);
                       
					   if(IsFull() )
						   printf("\n\t\t Queue is Full");
					   else{
						   Add(num);
					       printf("\n\t\t %d is Add",num);
					   }
			           break;
					   
			   case 2: if(IsEmpty())
                           printf("\n\t\t Queue is Enter");
                       else
                           printf("%d is Remove ",Remove(pq));
                           break;           
                          
               case 3 :for(i=0;i<MAX;i++)
                          printf("\t %d",pq->data[i]);
                        break;
		  }
	  }while(ch<4);
getch();
return(0);
}	  
		  
