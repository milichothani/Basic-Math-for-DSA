#include<iostream>
using namespace std;

void armstrong(int n){
    int sum =0;
    int dup = n;
    while(n>0){
        int lastdig = n%10;
        sum = sum + (lastdig*lastdig*lastdig*lastdig);
        n = n/10;
    }
    if(sum == dup) cout<<"Armstrong";
    else cout<<"Not Armstrong";
}

int main(){
    int n;
    cin>>n;
    armstrong(n);

return 0;
}