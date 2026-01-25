#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


void revrsearray(vector <int> & arr){
    int left = 0;
    int right = arr.size() - 1;
    while(left < right){
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}
int main(){
    vector <int> ans = {10,2,3,4};
    revrsearray(ans);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
}
