#include <iostream>
using namespace std;

#define ll long long

int main(){
    int n;
    cin>>n;
    while(n--){
        ll x, y;
        cin>>x>>y;  
        //1 4  --> 9 +1
        //1 3  --> 9-1+1
        //1 5  --> 25-1+1
        //2 5  --> 25 - 2
        if(x<y){
            ll ans; 
            if(y%2!=0){
                ans =(y*y)-x+1;
            }
            else{
                ans =((y-1)*(y-1))+x;
            }
            cout<<ans<<endl;
        }
        // 4 2   16-4-1= 11 9+2
        else{
            ll ans;
            if(x%2!=0){
                ans = ((x-1)*(x-1))+y;
            }
            else{
                ans = (x*x)-y+1;
            }
            cout<<ans<<endl;
        }

    }
}