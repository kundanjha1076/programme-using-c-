#include<iostream>
using namespace std;
class demo

{
	private:
	int m,n;
	public:
		demo(void);
	void sum();
//	void sub();
//	void mul();
	//void div();
	
};
demo::demo(void)
{
	m=10;
	n=20;
}
void demo::sum()
{
	int sum1;
	sum1=m+n;
	cout<<"sum of two numbers using constructor is"<<endl;
	cout<<sum1;
	
}
int main()
{
	demo d;
	d.sum();
	return 0;
}
