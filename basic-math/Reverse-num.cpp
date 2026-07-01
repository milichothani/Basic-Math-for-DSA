#include<iostream>
using namespace std;

void reverse_number(int n){
    int revNum = 0;
    while(n>0){
       int last_digit = n%10;
       n=n/10;
       revNum = (revNum * 10) + last_digit;

    }
    cout<<revNum;
}

int main(){
    int n;
    cin>>n;
    reverse_number(n);

return 0;
}