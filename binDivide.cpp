#include <iostream>
#include <string>

using namespace std;

int solution (string s)
{
	int v = 0, i = 0;
	
	v = stoi(s, 0,2); // string to bin function
	
	
	cout << v;
	
	while( v > 0)
	{
		// check if even
		if( v%2 == 0)
if( v%2 == 0)
		{
			v = v/2;
		}
		
		else 
			v = v - 1;
	
		i++;
	}
	
	return i;
}


int main()
{
	string bin = "11111111";
	
	cout << solution(bin) << endl;
}
