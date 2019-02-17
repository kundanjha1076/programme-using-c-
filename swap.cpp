#include<iostream>
using namespace std;
class swapping
{
	
	int x,y,temp;
	public:
		void exchange();
	
};
void swapping::exchange()
{
	cout<<"enter two number you  want to exchange"<<endl;
	cin>>x>>y;
	temp=x;
	x=y;
	y=temp;
	cout<<"elements after swapping is "<<x<<y<<endl;
	
	
	
}
int main()
{
	swapping s;
	s.exchange();
	return 0;
	
}
