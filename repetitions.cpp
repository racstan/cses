#include <iostream>

int main(){
    int num , count =0;
    char temp;
    std::cout<<"Enter number"<<std::endl;
    std::cin>>num;
    char* arr = new char[num];
    bool* visited = new bool[num];
    int* countArr = new int[num];
    for(int i=0;i<num;i++){
        visited[i] = false;
        countArr[i] = 0;
    }
    if(num>=1&& num<=(10 ^ 6)){
        for(int i=0;i<num;i++)
        {
            std::cout<<"Enter element"<<std::endl;
            std::cin>>arr[i];
        }

        // for(int i=0;i<num;i++){
        //     for(int j=i+1;j<num;j++){
        //         if(arr[i]>arr[j]){
        //         temp = arr[i];
        //         arr[i] = arr[j];
        //         arr[j] = temp;
        //     }
        //     }
        // }

        for(int i=0; i<num;i++){
            if(visited[i]!=true){
                int count =1;
                for(int j=i+1;j<num;j++){
                    if(arr[i]==arr[j]){
                        visited[j]=true;
                        count++;
                    }
                }
                visited[i] =true;
                countArr[i] = count;
            }
        }
        count =0;
        for(int i=0;i<num;i++){
            if(visited[i] = false){
                count++;
            }
        }
        std::cout<<"Unique elements are"<<count<<std::endl;

        for(int i=0;i<num;i++){
            if(visited[i]==1){
                std::cout<<countArr[i]<<std::endl;
            }
        }
    }
    delete[] arr;
    delete[] visited;
    delete[] countArr;
    return 0;
}