#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int N;
	cin>>N;
	
	int *numbers=new int[N];

	for(int i=0; i<N; i++)
	{
		cin>>numbers[i];
	}
	
	int max_length=1;
	
	for(int i=0; i<N-1; i++)
	{
		int length = 1;
		int lastnumber = numbers[i];
		
		for(int j=i+1; j<N; j++)
		{
			if(lastnumber<numbers[j]){
				length++;
				lastnumber = numbers[j];
			}
		}
		max_length = max(max_length, length);
	}
	
	cout<<max_length;
	
	return 0;
}
