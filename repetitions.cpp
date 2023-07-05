// #include <iostream>
// using namespace std;
// #define TEST 100
// int main(){
//     int n;
//     int count = 0;
//     char arr[TEST];
//     char uniq[TEST];
//     int countUniq[TEST];
//     bool charSet[256] = {false};
//     cout<<"enter n"<<endl;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"Original string"<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i];
//     }

//     for(int i=0;i<n;i++){
//         count =0;
//         char c = arr[i];
//         if(charSet[c]==true){
//             countUniq[i] = count++;
//             continue;
//         }
//         charSet[c] = true;
//         uniq[i] = c;
//     }

//     for(int i=0;i<n;i++){
//         cout<< uniq[i]<<endl;
//     }

// }


#include <iostream>
using namespace std;
int main(){

string sequence;
cout<<"sequence"<<endl;
cin>>sequence;
int n = sequence.length();
int longestRep = 1;
int currentRep = 1;

for(int i=0;i<n-1;i++){
    if(sequence[i]==sequence[i+1]){
        currentRep++;
    }
    else{
        longestRep = max(longestRep,currentRep);
        currentRep = 1;
    }
}
longestRep = max(longestRep, currentRep);
cout<<longestRep<<endl;
return 0;
}