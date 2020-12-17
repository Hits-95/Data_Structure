#include<stdio.h>
#include<conio.h>
#include<string.h>

struct book{
	   char bname[10];
	   int price;
	   int publication;
}

void bubblesort(struct book a[],int n){
		int pass,i;

		struct book t;
		for(pass=1;pass<n;pass++){
		   for(i=0;i<=n-1-pass;i++){
		       if(strcmp(a[i].bname,a[i+1].bname)>=0){
			   t=a[i];
			   a[i]=a[i+1];
			   a[i+1]=t;
			}
		    }
		}
	}

 main(){;

     int n;
     struct book x[10];

     printf("\n Enter how many no`s = ");
     scanf("%d",&n);
     printf("\n Enter a %d records :- \n book name \n price \n publication ",n);
     for(int i=0;i<n;i++){
	scanf("%s",x[i].bname);
	scanf("%d",&x[i].price);
		scanf("%d",&x[i].publication);
     }
     bubblesort(x,n);
	 printf("\n bubble sort are :-\n ");

     for(int i=0;i<n;i++) {
       printf("%s\t",x[i].bname);
       printf("%d\t",x[i].price);
       printf("%d\n",x[i].publication);
     }
     getch();
     return(0);
    }
