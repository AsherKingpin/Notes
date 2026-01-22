#include <string>
#include <iostream>

using namespace std;

void recursiveN(string s, int n){
    if(n == 1){
        cout << s << endl;
        return;
    }
    else{
        cout << s << endl;
        recursiveN(s,n-1);
    }
}

int main(){
    string t = "new";
    recursiveN(t,3);
    return 0;
}
