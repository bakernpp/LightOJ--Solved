#include<bits/stdc++.h>
#include<cstdio>
#include<cmath>
#include<map>
#include<algorithm>
#define pi 2*acos(0.0)
#define ll long long
using namespace std;
int main(){
	ll t,n,m,ans,k=0;
	//freopen("in.txt","r",stdin);
	cin>>t;
	while(t--){
		cin>>n>>m;
		ans=(n*m)/2;
		printf("Case %lld: %lld\n",++k,ans);
	}
	return 0;
}
