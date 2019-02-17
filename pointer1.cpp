#include<iostream>
using namespace std;// airthematic operation using pointer
int main()
{
	int a,b,sum, diff,mul;
	int*p1,*p2;
	
	p1=&a;
	p2=&b;
	cout<<"enter two number";
	cin>>a>>b;
	sum=*p1+*p2;
	cout<<"\n sum= "<<sum;
	diff=*p1-*p2;
	cout<<"\n differnce of two number is"<<diff;
	mul=*p1**p2;
cout<<" \n multiplication is"<<mul;
	cout<<"\n adress of a is"<<&p1;
	cout<<"\n address of b is"<<&p2;
	return 0;	
}
