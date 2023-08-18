#include <iostream>
#include <vector>
using namespace std;

#define ll long long

vector <ll> mem;
ll solve(ll n){
    if(n==0){
        return 1;
    }
    else if(n<0){
        return 0;
    }
    else if(mem[n]!=-1){
        return mem[n];
    }
    else{
    ll ans=0;
    for(ll i=1;i<7;++i){
        ans+= solve(n-i);
    }
    mem[n]= ans;
    return ans;
    }
}
int main(){
    ll n;
    cin>>n;
    mem.assign(n+1,-1);
    ll answer = solve(n);
    cout<<answer;

}