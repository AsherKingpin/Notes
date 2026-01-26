#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

void Frequency(int arr[], int n){
    unordered_map <int,int> ans;
    for(int i = 0; i < n; i++){
        ans[arr[i]]++;
    }
    for(auto it: ans){
        cout << it.first << " -> " << it.second << " ";
    }
}

int main() {
    // Input array
    int arr[] = {10, 5, 10, 15, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Call the function to count frequencies
    Frequency(arr, n);
    return 0;
}
