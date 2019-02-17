// using constructor
#include<iostream>
using namespace std;
class student
{
	private:
		int roll_no;
		int marks;
		public:
			student()
			{
				roll_no=0;
				marks=0;
				
			}
			student(int r,int m=0)
			{
				roll_no=r;
				marks=m;
				
			}
	void show_data()
	{
		cout<<"\n Roll no .= "<<roll_no;
		cout<<"\n marks ="<<marks;
		
		
	}
	
	
};
int main()
{
	student s1;
	s1.show_data();
	student s2(3);
	s2.show_data();
	student s3(05,98);
	s3.show_data();
	return 0;
	
	
	
	
	
}
