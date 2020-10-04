#include<iostream>
//the complexity of this program is O(n^2)
using namespace std;
int main()
{
	string x, y;
	int i, j;
	cout<<"ENTER FIRST STRING = ";
	cin>>x;
	cout<<"\nENTER SECOND STRING = ";
	cin>>y;
	
	if(x.length() == y.length())
	{
		for(i=0; i<x.length(); i++)
		{
			for(j=0; j<y.length(); j++)
			{
				if(x[i] == y[j])
				{
					x[i] = 1;
					y[j] = 1;
				}
			}
		}
		if( x == y)
		{
			cout<<"BOTH THE STRINGS ARE ANAGRAM OF EACH OTHER";
		}
		else
		{
			cout<<"BOTH THE STRINGS ARE NOT ANAGRAM OF EACH OTHER";
		}	
	}
	else
	{cout<<"BOTH THE STRINGS ARE NOT ANAGRAM OF EACH OTHER";}
	
}
