#include <iostream>
using namespace std;

#define ll long long

int main(){
    ll n;
    ll res=1;
    cout<<"hello";
    cin>>n;
    for(ll i=1; i<=n;++i){
        res*=i;
    }
    cout<<res;
}