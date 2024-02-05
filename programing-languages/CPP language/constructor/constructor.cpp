#include<iostream>
using namespace std;

class one
{
	public:
	string abc;
	string xyz;
	int pqr;
	
	one (string a,string x,int p)
	{
		abc =a;
		xyz =x;
		pqr =p;
	}	
};

int main()
{
	one two("hh","dcf",12);
	one two1("hh","dcf",12);
	cout<<two.abc<<two.xyz<<two.pqr<<endl;
	cout<<two1.abc<<two1.xyz<<two1.pqr<<endl;

	
	
	
	return 0;
}
