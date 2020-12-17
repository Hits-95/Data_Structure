/* HIT`S*/

#include<stdio.h>
#include<conio.h>

void merge (int x[],int low,int mid,int high)
 {
   int l1,l2,i,a[11];
    l1=low;
    l2=mid+1;
    i=low;
    while(l1<=mid && l2<=high){
      if(x[l1]<x[l2]){
        a[i]=x[l1++];
	    i++;
      }
      else{
	    a[i]=x[l2++];
	    i++;
      }
    }

  while(l1<=mid)
   a[i++]=x[l1++];

  while(l2<=high)
   a[i++]=x[l2++];
 for(i=low;i<=high;i++)
  x[i]=a[i];
}
void msort(int x[],int low,int high)
{
  int mid;
  if(low<high)
  {
  mid=(high+low)/2;
  msort(x,low,mid);
  msort(x,mid+1,high);
  merge(x,low,mid,high);
  }
 }

void readarry(int a[],int n)
{  int i;
   printf("\n Enter %d elements \n",n);
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
}

void display(int a[],int n)
{  int i;
   printf("\n Enter %d elements \n",n);
 for(i=0;i<n;i++)
 printf("%d\n",a[i]);
}

 int main()
 {
 int a[10],n,i;
 printf("\n How many no`s are you enter = ");
 scanf("%d",&n);
 readarry(a,n);
 msort(a,0,n-1);
 display(a,n);
 getch();
 }