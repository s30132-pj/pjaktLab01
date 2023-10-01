#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 0, c = 0;
    int max = 0;
    int min = 0;

    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;

    if (a < b)
        min = a;
    else
        min = b;

    if (a > b)
        max = a;
    else
        max = b;

    if (max < c)
        max = c;
    else
        min = c;

    cout << "max = " << max << endl;
    cout << "min = " << min << endl;

}
