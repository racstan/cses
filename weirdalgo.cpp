#include <iostream>
using namespace std;

class weirdalgo{
    int n;
    int temp;
    public:
    weirdalgo(){
        n=0;
        temp=0;
    }
    weirdalgo(int num){
        n = num;
        temp =0;
    }

    int calculate(int num){
        int n = num;
        cout<<num<<"->";
        if(num!=1){
        if(num>-1){
            if(num%2==0){
                temp = num/2;
            }
            else{
                temp= (num*3)+1;
            }
          }
        return temp;
        calculate(num);
        }else{
        return num;
        }
    }
};

int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    weirdalgo w1(n);
    int result = w1.calculate(n);
    cout<<result<<endl;
    return 0;
}