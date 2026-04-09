#include <iostream>
using namespace std;

class stImp{
    int st[10];
    int top = -1;
    public:
        void push(int x){
            if(top >= 9){
                cout << "Stack is Full";
                return;
            }
            top += 1;
            st[top] = x;
        }
        void pop (){
            if(top == -1){
                cout << "Stack is Empty";
                return;
            }
            top -= 1;
        }
        int top(){
            if(top == -1){
                cout << "Stack is Empty";
                return -1;
            } 
            return st[top];
        }
        int size(){
            return top + 1;
        }
};
