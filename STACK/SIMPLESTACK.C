#include<stdio.h>
#include<conio.h>
#define MAX 100

typedef struct{
	int items[MAX];
	int top;
}stack;

//CHECK WHETER THE "stack" IS FULL OR NOT
 int ISFULL(stack *s){             
            if(s->top==MAX-1)   /**********************************/
               return 1;        /*  return(s->top==MAX-1)          */
            else                /**********************************/
                return 0;	 	
 }

//CHECH WHETER THE "stack" IS EMPTY OR NOT
 int ISEMPTY(stack *s){
             if(s->top==-1)        /**********************************/
                return 1;          /*  return(s->top==-1)            */
             else                  /**********************************/
                return 0;
 }
 
//PUSH
 void PUSH(stack *s,int n){
          
          if(ISFULL(s))
             printf("\n SORRY BRO.... stack IS FULL");
          else{
               s->top=s->top+1;
	 s->items[s->top]=n; 	
          }
 }
 
 //POP
 int POP(stack *s){
          int n;
          
          if(ISEMPTY(s))
             printf("\n SORRY BRO....stack IS EMPTY");
          else{
             n=s->items[s->top];
             s->top=s->top-1;
             return(n);	
          }	
 }
//DISPLAY RESULT 
 void DISPLSY(stack *s){
 	if(ISEMPTY(s))
 	   printf("SORRY BRO.....\n PLEASE 1st INSERT NUMBERS IN stack");
 	else{
 	   for(int i=0;i<=s->top;i++)
 	       printf("%d\t",s->items[i]);
	 }   
 }

//MAIN
int main(){
        int ch,n;
        stack s;
        
        //INITILIZATION
        s.top=-1;
        do{
          //menu
          printf("\n\n\t\t");
          printf("\n\t\t 1 : PUSH ");
          printf("\n\t\t 2 : POP");
          printf("\n\t\t 3 : DISPLAY");
          printf("\n\t\t 4 : CHECK stack IS FULL OR NOT");
          printf("\n\t\t 5 : CHECK stack IS EMPTY OR NOT");  
          printf("\n\t\t 6 : EXIT");
          getch();
        
          printf("\n\n\t\t ENTER YOUR CHOICH => ");
          scanf("%d",&ch);
          
          switch(ch){
          	  
          	  case 1: printf("\n\t\t ENTER NUMBER => ");
          	          scanf("%d",&n);
          	          PUSH(&s,n);
          	          printf("\n\t\t VALUE IS INSERT.");
          	          getch();
          	          break;
          	 
          	  case 2: n=POP(&s);
          	          printf("\n\t\t VALUE %d IS POPED.",n);
          	          getch();
          	          break;
          	                   
          	  
          	  case 3: printf("\n\t\t THE RESULT ARE =>\n\t\t");
          	          DISPLSY(&s);
          	          getch();
          	          break;
          	 
          	  case 4: if(ISFULL(&s))
	             printf("\n\t\t stack IS FULL ");
	          else if(!ISEMPTY(&s) && !ISFULL(&s)) 
	                  printf("\n\t\t stack IS HALF ");  
		  else         	             
		     printf("\n\t\t stack IS EMPTY. .");
          	            getch();
          	          break;
          	 
          	  case 5:  if(ISEMPTY(&s) && !ISFULL(&s)) 
	             printf("\n\t\t stack IS EMPTY ");
	          else   
          	             printf("\n\t\t stack IS HALF.");
          	          getch();
          	          break;
          	
          	  
        

          
        }
       }while(ch<6);
       return(0);
}

 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
