#include<bits/stdc++.h>
using namespace std;

int sqrtInteger(int n){
    int s=0;
    int e=n;
    int ans=-1;
    int mid = s + (e-s)/2;

    while (s<=e)
    {
     int sqr= mid*mid;
        if(sqr==n){
            return mid;
        }
        else if(sqr<n){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
      
    }
    return ans;

}


int main(){
    
    cout<<sqrtInteger(6)<<endl;
    return 0;
}