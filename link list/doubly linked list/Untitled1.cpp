#include<iostream>
using namespace std;
int top=3;
class base{
    protected:
    	 int top;
    	 base(){
    	 	top=2;
    	 	cout<<endl<<top;
		 }
};
class derived : public base{
	   private:
	   	int top;
	   	public:
	   		derived():base(){
	   			 top=1;
	   			 cout<<endl<<top;
	   			 cout<<endl<<base::top;
	   			 cout<<endl<<::top;
			   }
};
int main(){
	derived obj;
	cin.get();
	return(0);
}
