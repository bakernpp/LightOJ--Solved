#include<bits/stdc++.h>
#include<cstdio>
#include<cmath>
#include<map>
#include<algorithm>
#define pi 2*acos(0.0)
using namespace std;
int main(){
	int t,n,input,sum,k=0,i;
	freopen("in.txt","r",stdin);
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		sum=0;
		for(i=1;i<=n;i++){
			scanf("%d",&input);
			sum+=input;
		}
		printf("Case %d: %d\n",++k,sum);
	}
	return 0;
}
