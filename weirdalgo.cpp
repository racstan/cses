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
<<<<<<< HEAD
        static int count =0;
        if(count==0){
        temp = num;
        }
        if(temp!=1){
        if(temp>-1){
            cout<<temp<<" ";
=======
        int count =0;
        if(count==0){
        temp = num;
        }
        cout<<temp<<"->";
        if(temp!=1){
        if(temp>-1){
>>>>>>> 047b6d030177a592715a79f12f09217bf2742cde
            if(temp%2==0){
                temp = temp/2;
            }
            else{
                temp= (temp*3)+1;
            }
          }
<<<<<<< HEAD
        count++;
        calculate(temp);
=======
        return temp;
        calculate(temp);
        count++;
        }else{
        return num;
>>>>>>> 047b6d030177a592715a79f12f09217bf2742cde
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