#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int count(int x){
    int n = 0;
    while(x > 0){
        n++;
        x = x/10;
    }
    return n;
}

void Armstrong(int x){
    long sum = 0;
    int y = x;
    int exp = count(x);
    while(y > 0){
        int digit = y % 10;
        y = y / 10;
        sum = sum + (pow(digit,exp));
    }
    if(x == sum){
        cout << "Yes, it's an Armstrong Number";
    }
    else{
        cout << "No, it's not an Armstrong Number";
    }
}

int main(){
    int num1;
    cout << "Enter a number ";
    cin >> num1;
    Armstrong(num1);
    return 0;
}
