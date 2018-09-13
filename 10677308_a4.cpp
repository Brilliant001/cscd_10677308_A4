#include <iostream>
using namespace std;
int main()
{
	int a, b, g;
	
	cout<<"enter any two positive integers =";
	
	cin>>a>>b;
	
	while (a != b);
	
	
	{
		
		if (a>b)
		
		a=a-b;
		
		else
		
		b=b-a;
		
	}
g=a;

cout <<"G.C.D =" <<g;

return 0;

}
