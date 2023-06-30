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
        static int count =0;
        if(count==0){
        temp = num;
        }
        if(temp!=1){
        if(temp>-1){
            cout<<temp<<" ";
            if(temp%2==0){
                temp = temp/2;
            }
            else{
                temp= (temp*3)+1;
            }
          }
        count++;
        calculate(temp);
        }
        return 1;
    }
    
};

int main(){
    int n;
    cin>>n;
    weirdalgo w1(n);
    int result = w1.calculate(n);
    cout<<result<<endl;
    return 0;
}