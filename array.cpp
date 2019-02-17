#include<iostream>// using array of objects
using namespace std;
class demo
{
	char name[20],address[20];
	int ph_no,percentage;
	public:
		void input();
		void output();
		
	
	
};
void demo::input()
{
	cout<<"enter the name of the students"<<endl;
	cin>>name;
	cout<<"enter the address"<<endl;
	cin>>address;
	cout<<"enter the phone number"<<endl;
	cin>>ph_no;
	cout<<"enter the percentage"<<endl;
	cin>>percentage;
	
}
void demo::output()
{
	
	cout<<"name of the student is"<<endl;
	cout<<name<<endl;
	cout<<"address is "<<address<<endl;
	cout<<"phone number is "<<ph_no<<endl;
	cout<<"percentage is "<<percentage<<endl;
}
int main()
{
	demo d[3];
	for(int i=0;i<3;i++)
	{
	
	d[i].input();
}
{


	for(int i=0;i<3;i++)

	d[i].output();
}
	return 0;
	
	
	
}
