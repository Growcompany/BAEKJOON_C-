#include <iostream>

using namespace std;

int result[1000001] = {0,1,2,};

int tile(int n) {

	if(result[n])
	{
	return result[n]%15746;
	}
	else
	{
		result[n]=tile(n-1)+tile(n-2);
		return result[n]%15746;
	}
}

int main()
{
	int N;
	cin>>N;
	cout<<tile(N)<<'\n';	
		
	return 0;
}
