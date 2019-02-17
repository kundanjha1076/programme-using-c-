// using function in c++
#include<iostream>
using namespace std;
int sum(int,int);//formal parameters
int main()
{
	int x,y,a;
	cout<<"enter two numbers";
	cin>>x>>y;
a=	sum(x,y);//actual parameters
cout<<a;
	return 0;
	
	
}
int sum(int a, int b)
{
	
	int sum;
	sum=a+b;
//	cout<<"sum of two numbers is "<<sum<<endl;
return sum;
}

