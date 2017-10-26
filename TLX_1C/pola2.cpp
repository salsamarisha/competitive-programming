#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, a=0;
	cin>>N;
	for(int i=0; i<N; i++){
		for(int j=0; j<=i; j++)
		{
			if(a<10)
			{
			cout<<a;
			a++;
			}
			else
			{
			a=0;
			cout<<a;
			a++;
			}
		}
		cout<<endl;
	}
}

