#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int t,n,a,b;
	cin>>t;
	while(t--){
		cin>>n;
		if(n<=10 && n){
			a=n/2;
			b=n-a;
		}
		else if(n>10){
			a=n-10;
			b=n-a;
		}
		else
		{
			a=b=0;
		}
		cout<<a<<" "<<b<<'\n';
	}
	return 0;
}
