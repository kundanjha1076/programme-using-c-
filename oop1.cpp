#include<iostream>
using namespace std;
class algebra
{
	int x,y,mul,div;
	public:
	void multiply();
	void division();
	
	
	
};
void algebra::multiply()
{
	cout<<"enter two numbers"<<endl;
	cin>>x>>y;
	mul=x*y;
	cout<<"multiplication of two number is "<<mul<<endl;
	
}
void algebra::division()
{
	cout<<"enter two numbers"<<endl;
	cin>>x>>y;
	div=x/y;
	cout<<"division of two number is"<<div<<endl;
	



}
int main()
{
	algebra a;
	a.multiply();
	a.division();
	return 0;
	
}

