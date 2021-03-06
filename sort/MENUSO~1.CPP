//Menu Driven Program

#include<stdio.h>
#include<conio.h>


//quick sort
	partion(int x[],int lb,int ub) {
		int low,high,p,t;
		low=lb+1;
		high=ub;
		p=x[lb];

		do{
			while(x[low]<p && low<=ub)
				low++;

			while(x[high]>p && high>lb)
				high--;

			if(low<high) {
				t=x[low];
				x[low]=x[high];
				x[high]=t;
			}
		}while(low<high);

		x[lb]=x[high];
		x[high]=p;

		return(high);
	}

	void qsort(int x[],int lb,int ub) {
		int j;
		if(lb<ub) {
			j=partion(x,lb,ub);
			qsort(x,lb,j-1);
			qsort(x,j+1,ub);
		}
	}

	//merge sort
	void merge (int x[],int low,int mid,int high) {
		int l1,l2,i,a[11];

		for(l1=low,l2=mid+1,i=low;l1<=mid && l2<=high;i++) {
			if(x[l1]<x[l2])
				a[i]=x[l1++];
			else
				a[i]=x[l2++];
		}

		while(l1<=mid)
			a[i++]=x[l1++];

		while(l2<=high)
			a[i++]=x[l2++];

		for(i=low;i<=high;i++)
			x[i]=a[i];
	}

	void msort(int x[],int low,int high) {
		int mid;

		if(low<high){
			mid=(high+low)/2;
			msort(x,low,mid);
			msort(x,mid+1,high);
			merge(x,low,mid,high);
		}
	}

//insertion sort
void isort(int x[],int n){
	int y,upos,spos ,newelement;
	upos =1;

	y: newelement=x[upos];

	spos=upos-1;
	while(x[spos]>newelement && spos>=0){
		x[spos+1]=x[spos];
		spos=spos-1;
	}

	x[spos+1]=newelement;
	upos++;

	if(upos<n)
		goto y;
}

//bubble sort
	void bsort(int x[],int n){
		int t ,pass,i,flg;

		for(pass=1;pass<n;pass++){
			flg=0;
			for(i=0;i<=n-1-pass;i++){
				if(x[i]>x[i+1]){
					t=x[i];
					x[i]=x[i+1];
					x[i+1]=t;
					flg=1;
				}
			}
			if(pass<n&&flg==0)
			break;
		}
	}

	//selection sort

	void ssort(int x[],int n){
		 int temp,key,i;

		 for(int pass=0;pass<n;pass++){
		    for(i=pass+1;i<n;i++){
			if(x[i]<x[pass]){
			  temp=x[i];
			  x[i]=x[pass];
			  x[pass]=temp;
			 }
		     }
		 }
	    }


	//read array
	void readarray(int a[],int n)
	{
		int i;
		printf("\n Enter %d numbers friend =  ",n);

		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
	}

	//Display Result
	void displayarray(int a[],int n,int c){
		int i;

		if(c==1) {
		   printf("\n The Bubble technic result is => \n");
		}else if(c==2){
			 printf("\n The Insertion technic result is => \n");
		       }else if(c==3){
				printf("\n The Quick technic result is => \n");
			     }else if(c==4){
				      printf("\n The Merge technic result is => \n");
				    }else
					 printf("\n The selection sort result is => \n");

		for(i=0;i<n;i++)
			printf("%d\n",a[i]);
	}

	//menu
       void menu{
		     printf("\n Welcome to Menu driven Program ! Select the options to use following Algorithms - ");
		     printf("\n 1 Bubble sort");
		     printf("\n 2 Insertion sort");
		     printf("\n 3 quick sort");
		     printf("\n 4 merge sort");
		     printf("\n 5 selection sort");
		     printf("\n 6 EXIT ");
	    }

	//Main  Program
	main(){
		int n,a[10],ch ;
		 clrscr();
		 menu();
		    do{
			printf("\n Enter your choice HIT`S = ");
			scanf("%d",&ch);

			switch(ch){

				case 1 : printf("\n Hi friend ! you are select bubble technic. \n How many nos are you enter = ");
						scanf("%d",&n);
						readarray(a,n);
						bsort(a,n);
						clrscr();
						menu();						displayarray(a,n,1);
						break;

				case 2 : printf("\n Hi friend ! you are select Insertion technic. \n How many nos are you enter = ");
						scanf("%d",&n);
						readarray(a,n);
						isort(a,n);
						clrscr();
						menu();
						displayarray(a,n,2);
						break;

				case 3 : printf("\n Hi friend ! you are select quick technic. \n How many nos are you enter = ");
						scanf("%d",&n);
						readarray(a,n);
						qsort(a,0,n-1);
						clrscr();
						menu();
						displayarray(a,n,3);
						break;

				case 4 : printf("\n Hi friend ! you are select merge technic. \n How many nos are you enter = ");
						scanf("%d",&n);
						readarray(a,n);
						msort(a,0,n-1);
						clrscr();
						menu();
						displayarray(a,n,4);
						break;


				case 5 : printf("\n Hi friend ! you are select selection technic. \n How many nos are you enter = ");
						scanf("%d",&n);
						readarray(a,n);
						ssort(a,n);
						clrscr();
						menu();
						displayarray(a,n,5);
						break;
			}
		}while(ch<=4);

		getch();
		return(0);
	}