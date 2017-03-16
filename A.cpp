#include <iostream> 
using namespace std;

int main()
{
	
	int x;  //input
	cout <<"please input an interger:"<<"\n";
	cin >> x;
	cout <<"you input"<< x<<"\n";
	while (true)
	{
		if(x==1)
		{
			break;
		}
		else if(x%2==1)
		{
			x=3*x+1;
		}
		else
		{
			x=x/2;
		}
		cout<<x << "\n";
	}
	return 0;
}
