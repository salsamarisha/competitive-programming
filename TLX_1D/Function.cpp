#include <bits/stdc++.h>
using namespace std;

int faktorial(int f)
{
	if(f==0)
		return 1;
	else
		return f*faktorial(f-1);
}
int main()
{
	int N;
	cin>>N;
	if(N<=10 && N>=0){
	cout<<faktorial(N)<<endl;
	}
	else{
	cout<<"ditolak"<<endl;
	}
}
