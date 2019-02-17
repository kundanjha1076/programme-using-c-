#include<iostream>
using namespace std;
double increment(const double &prm)
{
	
return(prm + 1);

}
int main()
{
	
	double x=10,y;
	y=increment(x);
	cout<<x+2<<" "<<y;
	return 0;
	
	
}

