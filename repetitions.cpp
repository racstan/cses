#include <iostream>
using namespace std;
#define TEST 100
int main(){
    int n;
    char arr[TEST];
    char uniq[TEST];
    bool charSet[256] = {false};
    cout<<"enter n"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Original string"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

    for(int i=0;i<n;i++){
        char c = arr[i];
        if(charSet[c]==true){
            continue;
        }
        charSet[c] = true;
        cout<<c<<endl;
    }
}