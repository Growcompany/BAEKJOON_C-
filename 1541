#include <iostream>
#include <string>
using namespace std;


int main(){
	string n;
	cin>>n;
	
	string num;
	int result =0;
	bool minus = false;
	
	for(int i=0; i<n.length(); i++){
		if(n[i] == '-' || n[i] == '+' || i == n.length()-1 )
		{
			if(i == n.length()-1)
			{num+=n[i];}
			if(!minus)
			{
			result += stoi(num);
			num = "";
			}
			else
			{
			result -= stoi(num);
			num = "";
			}
		}
		else
		{
			num+=n[i];
		}
		
		if(n[i] == '-'){
			minus =true;
		}
		
	}
	
	cout<<result;
	
}
