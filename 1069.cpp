#include<bits/stdc++.h>
#include<cstdio>
#include<cmath>
#define pi 2*acos(0.0)
using namespace std;
int main(){
	int t,y,l,res,k=0;
	cin>>t;
	while(t--){
		cin>>y>>l;
		res=abs(y-l)*4+3+5+y*4+3+5+3;
		printf("Case %d: %d\n",++k,res);
	}
	return 0;
}
