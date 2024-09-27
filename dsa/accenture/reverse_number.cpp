
#include<bits/stdc++.h>
using namespace std;

int reverseNumber(int n){
    int ans =0 ;
    while(n>0){
        int lastt_digit = n%10;
        ans = (ans*10)+ lastt_digit;
        int n=n/10;
    }
    return ans;
}

int main(){
    cout<<reverseNumber(4568)<<endl;
    return 0;
}