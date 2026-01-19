#include <algorithm>
#include <map>
#include <set>
#include <vector>
#include <iostream>
using namespace std;

void BubbleSort(int arr[], int n){
    for(int i = n; i >= 1; i--){
        for(int j = 0; j < n - 1; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main(){
    int n;
    cout << "Enter the length of the array: ";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        cout << endl;
    }
    BubbleSort(arr,n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
