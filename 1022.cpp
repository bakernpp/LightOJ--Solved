#include<bits/stdc++.h>
#define pi 2*acos(0.0)
using namespace std;
int main(){
	
	int t,k=0;
	double r,A,p,c=(1/1000000000);
	cin>>t;
	while(t--){
		cin>>r;
		p=2*r;
		A=p*p-pi*r*r;
		A+=c;
		printf("Case %d: %.4lf\n",++k,A);
	}
	return 0;
}
