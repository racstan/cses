#include <iostream>
using namespace std;
int main(){

string sequence;
cout<<"sequence"<<endl;
cin>>sequence;
int n = sequence.length();
int longestRep = 1;
int currentRep = 1;
if(n>=1&&n<=10^6){
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
}
else{
    return -1;
}
return 0; 
}