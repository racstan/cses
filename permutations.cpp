#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    int* arr = new int[n];
    if(n<=3){
        cout<<"No Solution"<<endl;
    }
    else{
        for(int i =0;i<n;i++){
            arr[i] = i+1;
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<endl;
        }

    }
    delete[] arr;
}