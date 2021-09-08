#include <iostream>

using namespace std;

int result[41] = {0,1,};

int fibonacci(int n) {
    if (n == 0) {
        return result[0];
    } else if (n == 1) {
        return result[1];
    } else {
		if(result[n])
		{
		return result[n];
		}
		else
		{
			result[n] =fibonacci(n-1)+fibonacci(n-2);
			return result[n];
		}
    }
}

int main()
{
	int T,N;
	cin>>T;
	for(int i=0; i<T; i++)
	{
		cin>>N;
		if (N>0) 
		{
			cout<<fibonacci(N-1)<<' '<<fibonacci(N)<<'\n';
		}
		else 
		{
			cout<<'1'<<' '<<'0'<<'\n';	
		}
		
	}
	
	return 0;
}
