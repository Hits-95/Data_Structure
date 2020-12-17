#include<stdio.h>
#include<conio.h>

  struct product{
                 int pno,price;
	             char *pname;
              };
		 
  typedef struct product PROD;
     
 int main(){
         PROD p[10];
         int n;
         FILE *fp;
         
         printf("\n HOW MANY RECORDS ARE INSERT ");
         scanf("%d",&n); 		 
	     
         fp=fopen("product.txt","w+");
         printf("\n ENTRE %d RECORDS",n); 
         
         for(int i=0;i<n;i++){
            
             scanf("%d%s%d",&p[i].pno,p[i].pname,&p[i].price);
         
            fprintf(fp,"%3d%4s%5d",p[i].pno,p[i].pname,p[i].price);
         }
         printf("file is create");
         fclose(fp);
         getch();
         return(0);
    }		 







































