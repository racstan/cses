#include <iostream>
using namespace std;
#define TEST 100
int main(){
    int n;
    int count = 0;
    char arr[TEST];
    char uniq[TEST];
    int countUniq[TEST];
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
        count =0;
        char c = arr[i];
        if(charSet[c]==true){
            countUniq[i] = count++;
            continue;
        }
        charSet[c] = true;
        uniq[i] = c;
    }

    for(int i=0;i<n;i++){
        cout<< countUniq[i]<<endl;
    }

}