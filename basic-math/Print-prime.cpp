#include<bits/stdc++.h>
using namespace std;

void print_prime(int n){
    int cnt =0;
    for(int i=1; i*i<=n; i++){
        if(n%i==0){
            cnt++;
            if((n/i) != i){
                cnt++;
            }
        }
    }
    if(cnt ==2) cout<<"Prime number";
    else cout<<"Not a prime number";
}
int main(){
    int n;
    cin>>n;
    print_prime(n);

return 0;
}