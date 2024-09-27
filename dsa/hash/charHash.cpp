#include<bits/stdc++.h>
using namespace std;

int main(){
    
   string s;
    cin>>s;
     

//precomputing the hash array
 //hashing the array elements  (counting the frequency of each element)
    int hashh[26]={0}; 
    for(int i=0;i<s.length();i++){
        hashh[s[i]-'a']++;
    }


    //for uppercase
    // int hashh[26]={0}; 
    // for(int i=0;i<s.length();i++){
    //     hashh[s[i]-'A']++;
    // }
  

  // for all 256 characters
    // int hashh[256]={0}; 
    // for(int i=0;i<s.length();i++){
    //     hashh[s[i]]++;
    // }

int q;
cin>>q;

    while (q--)
    {
        char c;
        cin>>c;

        //fetch
        cout<<hashh[c-'a']<<endl;
    }

    return 0;
}
    

       