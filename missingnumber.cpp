#include <iostream>

class missingnum{
    protected:
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
            std::cin>>count;
        }
        int calculate(int count){
            if(count!=0){
               int* tempArr = new int(count);
               for(int i=0;i<count;i++){
                std::cin>>temp;
                
               }
               delete[] tempArr; 
            }
            else{
                return -1;
            }
        }

};

int main(){
    missingnum i1();
    i1.input();
    i1.calculate();
    return 0;
}