#include<bits/stdc++.h>
using namespace std;

 

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int d,q,r;
    cin>>d>>q>>r;

    int dividend = (d * q) + r;  

    int ans = -1;

    for(int i=0;i<10;i++){
        if(arr[i] == dividend){
            ans = i;
            break;
        }
    }
     cout<<ans<<endl;
   
    return 0;
}
