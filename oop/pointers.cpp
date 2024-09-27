#include<bits/stdc++.h>
using namespace std;

int main(){

    int x = 10;
    int *y = &x;
    int **z = &y;

    // **z = 2; // x = 2 , *y = 2 , **z = 2

    cout<<*y<<endl;  // 10
    cout<<y<<endl;  // address of x


    return 0;


}

