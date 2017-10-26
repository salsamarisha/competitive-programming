#include <bits/stdc++.h>
using namespace std;

int main(){
	int N, k, a=1;
	cin>>N>>k;

	for(int i=1; i<=N; i++){
		if(i!=N){
		if(i%k==0)
		{
			cout<<"*"<<" ";
			a++;
		}
		else
		cout<<i<<" ";
		}
		else
		if(i%k==0)
		{
			cout<<"*";
			a++;
		}
		else
		cout<<i;
	}
	cout<<endl;
}
