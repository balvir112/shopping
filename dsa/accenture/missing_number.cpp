#include <bits/stdc++.h>
#include <vector>
using namespace std;


class Solution {
public:
    // The size of the array is n-1
    int missingNumber(int n, vector<int>& arr) {
        // Calculate the sum of the first n natural numbers
        int total_sum = n * (n + 1) / 2;
        
        // Calculate the sum of the elements in the array
        int actual_sum = 0;
        for (int i = 0; i < n - 1; i++) {
            actual_sum += arr[i];
        }
        
        // The missing number is the difference between the expected sum and the actual sum
        int missing_num = total_sum - actual_sum;
        return missing_num;
    }
};

int main() {
    Solution s;
    vector<int> arr = {1, 2, 3, 4, 6, 7, 8, 9, 10};
    int n = 10;
    cout << s.missingNumber(n, arr) << endl;
    return 0;
}