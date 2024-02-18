#include <iostream>
using namespace std;

string mergeAlternatively(string a, string b){
    int iterator=0;
    int len_eins = a.length();
    int len_zwei = b.length();
    char arr[len_eins+len_zwei];
    for(int i=0;i<len_eins;i++){
        arr[iterator]= a[i];
        iterator= iterator +2;
    }
    iterator=1;
    for(int i=0;i<len_zwei;i++){
        arr[iterator]= b[i];
        iterator=iterator+2;
    }
    string result = arr;
    return result;
}

int main(){
    string a = "abc";
    string b = "def";
    cout<<mergeAlternatively(a,b);
    return 0;
}