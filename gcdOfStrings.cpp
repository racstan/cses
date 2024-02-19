#include <iostream>
using namespace std;

string gcdOfStrings(string str1, string str2){
    int len1 = str1.length();
    int len2 = str2.length();
    char res[1000];
    if(len1>=1 && len2<=1000){
        for(int i=0;i<len1;i++){
            //for(int j=0;j<len2;j++){
                if(str1[i]==str2[i]){
                    res[i]= str1[i];
                }
                else{
                    return "";
                }
            //}
        }
        string result = res;
        return result;
    }
    else{
        return "String length doesn't match";
    }

}

int main(){
    string a = "hihi";
    string b = "hi";
    cout<<gcdOfStrings(a,b);
    return 0;
}