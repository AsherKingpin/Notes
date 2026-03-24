// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> &st, int val){
    if(st.empty()){
        st.push(val);
        return;
    }
    int topVal = st.top();
    st.pop();
    insertAtBottom(st,val);
    st.push(topVal);
}

void reverseStack(stack<int> &st){
    if(st.empty()){
        return;
    }
    int topVal = st.top();
    st.pop();
    reverseStack(st);
    insertAtBottom(st, topVal);
}



int main() {
    // Create a sample stack
    stack<int> st;
    st.push(4);
    st.push(1);
    st.push(3);
    st.push(2);

    // Reverse the stack
    reverseStack(st);

    // Print the reversed stack
    cout << "Reversed Stack: ";
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    return 0;
}
