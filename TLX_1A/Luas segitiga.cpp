#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int a,t;
	float luas;
	cin>>a>>t;
	luas=(float) a*t/2;
	cout<<fixed<<setprecision(2)<<luas<<endl;
	return 0;
}
