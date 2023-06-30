#include <iostream>

class missingnum{
    public:
        int count;
        int temp;
    public:
        missingnum(){
            count =0;
            temp =0;
        }
        missingnum(int count){
            this->count = count;
            this->temp = 0;
        }

        int input(){
            std::cout<<"Enter the count of numbers"<<std::endl;
            std::cin>>count;
            return count;
        }
        int calculate(int count){
            if(count!=0){
               int* tempArr = new int(count);
               for(int i=0;i<(count-1);i++){
                std::cout<<"Enter element"<<std::endl;
                std::cin>>temp;
                tempArr[i]=temp;
               }
               for(int i=0;i<(count-1);i++){
                for(int j=i+1;j<(count-1);j++){
                    if(tempArr[i]>tempArr[j]){
                        temp = tempArr[i];
                        tempArr[i] = tempArr[j];
                        tempArr[j] = temp;
                    }
                }
               }
                for(int i=0;i<count;i++){
                    temp = tempArr[0]+i;
                    if(temp!=tempArr[i]){
                        std::cout<<"The missing number is "<<std::endl;
                        std::cout<<temp<<std::endl;
                        break;
                    }
                }
               delete[] tempArr; 
            }
            else{
                return -1;
            }
        }

};

int main(){
    missingnum i1;
    int num = i1.input();
    i1.calculate(num);
    return 0;
}