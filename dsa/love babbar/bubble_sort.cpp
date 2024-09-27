#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& arr) {

    bool swapped = false;
    int n = arr.size();
    // for (int i = 0; i < n - 1; i++) {
    //     for (int j = 0; j < n - i - 1; j++) {
    //         if (arr[j] > arr[j + 1]) {
    //             swap(arr[j], arr[j + 1]);
    //         }
    //     }
    // }

    for(int i = 1; i<n; i++){
        for(int j = 0; j<n-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }

        if(swapped == false){  //for optimized bubble sort
            break;
        }
    }

  
}

int main(){
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    bubbleSort(arr);
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

// Time Complexity: O(n^2)
// Space Complexity: O(1)
// Stable: Yes
// In-Place: Yes
// Sorting In Place: Yes
// Online: No
// Uses extra space: No
// Algorithmic Paradigm: Brute Force

