// call by refernce method
#include<iostream>
using namespace std;
void swap(int &,int &);
int main()
{
	 int a=10,b=15;
	 cout<<"values of a and b before swapping  " <<a<<"\t"<<b<<endl;
	 swap(a,b);
	 cout<<"the values of a and b after swapping is " <<a<<"\t"<<b<<endl; 
	
	return 0;
}
void swap(int &x, int & y)
{
	int t;
	t=x;
	x=y;
	y=t;
	
	
}
