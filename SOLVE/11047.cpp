#include <iostream>

using namespace std;

int main(){
	int N,K;
	cin>>N>>K;
	int cnt =0;
	
	int money[N] = {};
	for(int i=0; i<N; i++)
	{
		cin>>money[i];
		
		
	}
	
	for(int i=N-1; i>-1; i--)
	{

		if(K >= money[i]){

			cnt += K/money[i];
			K -= money[i]*(K/money[i]);
		}
		
		if(K ==0){
			break;
		}
	}

	cout<<cnt;
}
