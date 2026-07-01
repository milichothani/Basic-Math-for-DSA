#include<iostream>
using namespace std;

int dig_extraction(int n){
    int cnt =0;
    while(n>0){
        cnt = cnt +1;
        n = n/10;
    }
    return cnt;
}

int main(){
    int n;
    cin>>n;

    int cnt = dig_extraction(n);
    cout<<cnt;

return 0;
}