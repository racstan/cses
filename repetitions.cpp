#include <iostream>

int main(){
    int num , count =0;
    char temp;
    std::cin>>num;
    char* arr = new char[num];
    int* visited = new int[num];
    visited ={0};
    if(num>=1&&num<=(10^6)){
        for(int i=0;i<num;i++)
        {
            std::cin>>arr[i];
        }

        for(int i=0;i<num;i++){
            for(int j=i+1;j<num;j++){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        for(int i=0; i<num;i++){
            if(visited[i]!=1){
                for(int j=i+1;j<num;j++){
                    if(arr[i]==arr[j]){
                        visited[j]=1;
                    }
                    count++;
                }
            }
        }
    }
    delete[] arr;
    delete[] visited;
    return 0;
}