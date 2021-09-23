#include <iostream>

using namespace std;

int arr[7] = {}; 
int N, M;

void repetition(int firstnum, int repeat){
	arr[repeat-1] = firstnum;
	
	if (repeat == M){
		for(int i=0; i<M; i++){
			cout<<arr[i]<<' ';	
		}
		cout<<'\n';

	}
	else{
		for(int i=0; i<N; i++){
			repetition(i+1, repeat +1);
		}
	}
	
}

int main(){
	cin>>N>>M;
	for(int i=1; i<N+1; i++){
	repetition(i,1);
	}
	
	
	return 0;
}
