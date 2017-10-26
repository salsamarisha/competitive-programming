#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin>>N;
	for(int i=1; i<=N;i++)
	{
		int j=1;
		while(j<=N-i)
		{
			cout<<" ";
			j++;
		}
		while(j>(N-i) && j<=N){
			cout<<"*";
			j++;
		}
		cout<<endl;	
}
}

