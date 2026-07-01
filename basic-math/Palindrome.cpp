#include<iostream>
using namespace std;

void palindrome(int n){
    int revNum =0;
    int dup = n;
    while(n>0){
        int lastdig = n % 10;
        revNum = (revNum * 10) + lastdig;
        n = n/10;
    }
    if(dup == revNum) cout<<"True";
    else cout<<"False";
}

int main(){
    int n;
    cin>>n;
    palindrome(n);

return 0;
}