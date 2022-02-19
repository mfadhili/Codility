#include <iostream>
# include <vector>

using namespace std;

int solution(vector<int> A)
{
	int maxSlice = 0;
	int currSlice = 0;
	
	for(int i = 0; i < A.size(); i++)
	{
		if( A[i] >= 0)
			currSlice = currSlice + A[i];
		else
		{
			if (currSlice == 0)
				continue;
			else if(currSlice + A[i] < 0)
				currSlice = 0;
			else
				currSlice = currSlice + A[i];
		}
		if (currSlice > maxSlice)
			maxSlice = currSlice;
	}
	
	return maxSlice;
	
}

int main()
{
	vector<int> A = {-1,2,1,2,0,2,1,-3,4,3,0,-1};
	
	cout << solution(A) << endl;
	
	return 0;
}
