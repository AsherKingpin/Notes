#include <iostream>
using namespace std;

int GCD(int x, int y)
{
    int A;
    int B;

    if (x < y)
    {
        A = y;
        B = x;
    }
    else
    {
        A = x;
        B = y;
    }


    while (B != 0)
    {
        int r = A % B;
        A = B;
        B = r;
    }

    return A;
}

int main()
{
    int num1, num2;

    cout << "Enter the numbers: ";
    cin >> num1;
    cin >> num2;

    int ans = GCD(num1, num2);

    cout << "The Gcd of the numbers is " << ans;

    return 0;
}
