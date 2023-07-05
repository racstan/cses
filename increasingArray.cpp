#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    int moves;
    int max ,temp;
    int count = 0;
    cin>>n;
    int* arr = new int[n];
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    max= arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout<<max<<endl;
    if(n>=1 && n<= 2*pow(10,5)){
        if(max>=1 && max<=pow(10,9)){
            for(int i=0;i<n-1;i++){
                if(arr[i]>arr[i+1]){
                    count+=arr[i]-arr[i+1];
                }
            }
            if(arr[n-2]>arr[n-1]){
                count+=arr[n-1]-arr[n-2];
            }
            else{
                count+=0;
            }
        }
        else{
            return -1;
        }
    }
    else{
        return -1;
    }
    cout<<count<<endl;
    delete[] arr;
}