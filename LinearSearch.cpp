#include <iostream>
#include <vector>
using namespace std;

void LS(vector <int> arr, int key){
    int n = arr.size();
    for(int i = 0; i < n; i++){
        if(arr[i] == key){
            cout << "The vaue is present at index " << i;
            return;
        }
    }
    cout << "Element not found! ";
}

int main(){
    vector <int> arr = {10,15,23,3,2};
    LS(arr,12);
    return 0;
}
