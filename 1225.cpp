#include<bits/stdc++.h>
#include <cmath>
#include<cstdio>
#define ll long long
int maxn=2e5+10;
using namespace std;
int palindrome(int n){
    int z,num=0,old;
    old=n;
    while(n!=0){
        z=n%10;
        num=10*num+z;
        n/=10;
    }
    if(num==old) return 1;
    else return 0;
}
int main(){
    int t,n,k=0;
    cin>>t;
    while(t--){
        cin>>n;
        if(palindrome(n))
            printf("Case %d: Yes\n",++k);
        else
            printf("Case %d: No\n",++k);
    }
    return 0;
}
