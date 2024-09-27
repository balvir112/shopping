#include<bits/stdc++.h>
using namespace std;
 
 int maxCandies(int arr[],int n,int m){
   
    int count = 0;
     for(int i=0;i<n;i++){
        if(arr[i] % 5 == 0){
            count++;
        }
        else if(arr[i] < m){
            count++;
            m = m - arr[i];
        }
     }
     return count;
 }


int main(){
  int n;
           //taking price of each candy 
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }


    int m; // money
    cin>>m;


    sort(arr,arr+n);

    cout<<maxCandies(arr,n,m)<<endl;
    
}