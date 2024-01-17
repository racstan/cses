#include <iostream>
#include <unordered_set>
using namespace std;
#define ll long long
int main(){
    ll n, temp;
    cin>>n;
    unordered_set <ll> arr;
    for(ll i=0;i<n;i++){
        cin>>temp;
        arr.insert(temp);  
    }
    cout<<arr.size();
    return 0;
} 