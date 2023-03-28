#include <iostream>
using namespace std;
int find_max(int a, int b)
{
    int diff = a - b;
    int sign = (diff >> 31) & 0x1;
    return a - sign * diff;
}

int find_min(int a, int b)
{
    int diff = a - b;
    int sign = (diff >> 31) & 0x1;
    return b + sign * diff;
}

int main()
{
    int a, b, max, min;
    cout << "Enter two numbers: ";
    cin >> a >> b;

   min= find_min(a, b);
   max= find_max(a, b);


    cout << "Maximum of " << a << " and " << b << " is " << max << endl;
    cout << "Minimum of " << a << " and " << b << " is " << min << endl;
    return 0;
}

// max = (a + b + abs(a - b)) / 2;
// min = (a + b - abs(a - b)) / 2;