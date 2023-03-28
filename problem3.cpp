#include <iostream>
using namespace std;

int main()
{
    int a, b,c,d ,sum;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    c = a;
    d = b;
    cout << "calculation:" << endl;

    while (d != 0)
    {
        sum = c ^ d;
        // cout <<"m=" <<(sum) << endl;
        // cout <<"x=" <<(c & d) << endl;
        d = (c & d) << 1;
        // cout << "y=" << d << endl;
        c = sum;
        // cout << c << " " << d << endl;
    }
    // cout << "solution:" << endl;

    cout << "Sum of " << a << " and " << b << " is " << sum << endl;
    return 0;
}