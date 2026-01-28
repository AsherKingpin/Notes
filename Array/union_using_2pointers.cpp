#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

vector<int> Union(vector<int> arr1, vector<int> arr2){
    vector<int> ans;
    int i = 0, j = 0;

    while(i < arr1.size() && j < arr2.size()){
        if(arr1[i] == arr2[j]){
            if(ans.empty() || ans.back() != arr1[i])
                ans.push_back(arr1[i]);
            i++; j++;
        }
        else if(arr1[i] < arr2[j]){
            if(ans.empty() || ans.back() != arr1[i])
                ans.push_back(arr1[i]);
            i++;
        }
        else{
            if(ans.empty() || ans.back() != arr2[j])
                ans.push_back(arr2[j]);
            j++;
        }
    }

    while(i < arr1.size()){
        if(ans.empty() || ans.back() != arr1[i])
            ans.push_back(arr1[i]);
        i++;
    }

    while(j < arr2.size()){
        if(ans.empty() || ans.back() != arr2[j])
            ans.push_back(arr2[j]);
        j++;
    }

    return ans;
}


int main() {
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {3, 4, 5, 6, 7};

    vector<int> result = Union(arr1, arr2);

    cout << "Union: ";
    for(int x : result){
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
