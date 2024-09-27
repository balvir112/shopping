// #include<iostream>  
// using namespace std;

// int function(int arr[], int n){
//     int xor_sum = 0;
//     for(int i = 0; i < n; i++){
//         xor_sum = xor_sum ^ arr[i];

//         cout<<xor_sum<<endl;
//     }
//     return xor_sum;
// }

// int main(){

//     int arr[] = {9, 1, 12, 1, 12, 9, 8,9,8};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     cout<<function(arr, n)<<endl;
//     return 0;

// }






//sizing

#include<iostream>
using namespace std;

class Test{
    public:
    static int x;
    int *ptr;
    int y;
};

int main(){
    Test t;
    cout<<sizeof(t)<<endl;
    cout<<sizeof(t.x)<<endl;
    cout<<sizeof(t.ptr)<<endl;
    cout<<sizeof(t.y)<<endl;

    cout<<sizeof(Test)<<endl;
    cout<<sizeof(Test *)<<endl;
    return 0;
}

