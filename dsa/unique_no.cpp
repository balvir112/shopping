// odd array is given and one number is repeated twice 
// and one number is repeated once. Find the number which is repeated once.

#include <iostream>
#include <vector>
using namespace std;

void unique_no(vector<int> v){
    int ans = 0;
    for(int i = 0; i < v.size(); i++){
        ans = ans ^ v[i];
    }
    cout << ans << endl;
}
  
int main(){
    vector<int> v = {1, 2, 3, 4, 5, 6, 1, 2, 3, 4, 5};
    unique_no(v);
    return 0;

}