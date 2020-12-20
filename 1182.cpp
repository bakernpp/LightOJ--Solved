#include<bits/stdc++.h>
#include <cmath>
#include<cstdio>
#define ll long long
int maxn=2e5+10;
using namespace std;
int solve(ll n){
    int z,one;
    while(n!=0){
        z=n%2;
        n/=2;
        if(z) one++;
    }
    if(one%2) return 0;//odd parity
    else return 1;//even parity
}
int main(){
    long long n,t,k=0,l;
    cin>>t;
    while(t--){
        cin>>n;
        if(solve(n))
            printf("Case %lld: even\n",++k);
        else
            printf("Case %lld: odd\n",++k);
    }
    return 0;
}


