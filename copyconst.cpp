// copy constructor
#include<iostream>
using namespace std;
class Numbers
{
	private:
		int x;
		public:
			Numbers(Numbers & N)
			{
				x=N.x;
		}
		Numbers(int i)
		{
			x=i;
		}
		void show_data()
		{
			
			cout<<"\n x= "<<x;
		}
	
	
};
int main()
{
	Numbers N1(20);
	Numbers N2(N1);
	N2.show_data();
	Numbers N3=N1;
	N3.show_data();
	return 0;
	
	
	
}
