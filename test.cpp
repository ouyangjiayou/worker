#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	cout<<12345.0<<endl;
	cout<<setiosflags(ios::fixed)<<setprecision(3)<<1.2345<<endl;
	cout<<setiosflags(ios::scientific)<<12345.0<<endl;
	cout<<setprecision(3)<<12345.0<<endl;
	return 0;
}
