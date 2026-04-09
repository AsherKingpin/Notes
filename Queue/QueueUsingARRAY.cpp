#include <iostream>
using namespace std;

class Queue{
    private:
        int size = 10;
        int q[10];
        int currentsize = 0;
        int start = -1;
        int end = -1;
    public:
        void push(int x){
            if(currentsize >= size){
                cout << "The Queue is Full";
                return;
            }
            if(currentsize == 0){
                start = 0;
                end = 0;
            }
            else{
                end = (end + 1) % size;
            }
            q[end] = x;
            currentsize +=1;
        }
        int  pop(){
            if(currentsize == 0){
                cout << "Queue is Empty";
                return -1;
            }
            int el = q[start];
            if(currentsize == 1){
                start = -1; end = -1;
            }
            else{
                start = (start + 1) % size;
            }
            currentsize--;
            return el;
        }
        int top(){
            if(currentsize == 0){
                cout << "Queue is Empty";
                return -1;
            }
            return q[start];
        }
        int Queuesize(){
            return currentsize;
        }
};
