#include<bits/stdc++.h>
#include<cstdio>
#include<cmath>
#define pi 2*acos(0.0)
using namespace std;
int main(){
	int t,a,b,c,p,q,r,k=0;
	//freopen("in.txt","r",stdin);
	cin>>t;
	while(t--){
		cin>>a>>b>>c;
		p=a*a;
		q=b*b;
		r=c*c;
		if(	(p+q)==r   ||   (p+r)==q	||  (r+q)==p	)
			printf("Case %d: yes\n",++k);
		else
			printf("Case %d: no\n",++k);
		
	}
	return 0;
}
