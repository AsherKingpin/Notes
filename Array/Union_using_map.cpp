#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector <int> Union(vector<int> arr1, vector <int> arr2){
    map <int,int> mpp;
    vector <int> ans;
    for(int i = 0; i < arr1.size(); i++){
        mpp[arr1[i]]++;
    }
    for(int i = 0; i < arr2.size(); i++){
        mpp[arr2[i]]++;
    }
    for(auto it:mpp){
        ans.push_back(it.first);
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
