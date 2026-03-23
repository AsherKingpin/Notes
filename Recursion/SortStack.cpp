#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void insert(stack<int>& s, int x){
    if(s.empty()||s.top() < x){
        s.push(x);
        return;
    }
    int temp = s.top();
    s.pop();
    insert(s,x);
    s.push(temp);
}


void sortStack(stack<int>& s){
    if(!s.empty()){
        int temp = s.top();
        s.pop();
        sortStack(s);
        insert(s,temp);
    }
}

int main() {
    stack<int> s;
    s.push(4);
    s.push(1);
    s.push(3);
    s.push(2);

    sortStack(s);

    // Print the sorted stack
    cout << "Sorted stack (descending order): ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}
