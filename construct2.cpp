// programme using parameterized constructor
#include<iostream>
using namespace std;
class demo
{
	int m,n;
	public:
		demo(int,int);
		void dispay(void)
		{
			cout<<"m = "<<m<<"\n";
			cout<<"n = "<<n<<"\n";
			
		}
};
demo::demo(int x, int y)
{
	m=x;
	n=y;
	
}
int main()
{
//int x,y
	demo d1;
	int x,y;
	cout<<"enter two numbers"<<endl;
	cin>>x>>y;
	//demo d1;
	d1=demo(x,y);
	d1.display();
	return 0;
}
