#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int n;
    cin>>n;
    ll mx = 0; 
    ll ans = 0;
    for(int i=0;i<n;i++){
        long long s;
        cin>>sss;
        mx = max(mx,s);   
        ans+= mx - s;
    } 
    cout<<ans;
}