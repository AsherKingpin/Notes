#include <algorithm>
#include <map>
#include <set>
#include <vector>
#include <iostream>
using namespace std;

void selection_sort(int arr[], int n){
    int min = 0;
    for(int i = 0; i < n - 2; i++){
        min = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        swap(arr[i], arr[min]);
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
    selection_sort(arr,n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
