#include<iostream>
using namespace std;
class sample
{
	int n ,rev=0,r;
	public:
		void reverse();
		
		
	
	
};
void sample::reverse()
{
	cout<<"enter a number you want to reverse"<<endl;
	cin>>n;
	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
		
	}
	cout<<"the reverse of the number is"<<rev<<endl;
	if(n==rev)
	
		cout<<"the given number is pallindrome"<<endl;
		
	else
		
		cout<<"the given number  is non pallindrome"<<endl;
}
int main()
{
	sample s;
	s.reverse();
	return 0;
}
