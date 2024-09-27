#include<bits/stdc++.h>
using namespace std;

// int hashh[1000] //range can be upto 10^7   when declaring the hash array globally

int main(){
     int n;
     cin>>n;

     //taking the input of the array

     int arr[n];
     for(int i=0;i<n;i++){
          cin>>arr[i];
     }

       //precomputing the hash array
       //hashing the array elements  (counting the frequency of each element)



     int hashh[1000]={0};  // range can be upto 10^6 when declaring the hash array locally
     for(int i=0;i<n;i++){
          hashh[arr[i]] += 1;
     }


        //taking the number of queries

     int q;
     cin>>q;
        while(q--){
            int number;
            cin>>number;

            //fetching the number of times the number is present in the array
            cout<<hashh[number]<<endl;
        }
}