#include <iostream>

using namespace std;

int gcd (int x, int y)
{
    int t;
    while (x > 0)
    {
        if (x < y)
        {
            t = x; x = y; y = t;
        }
        x = x%y ;
        cout << "sequence of x is " << x << endl;
    }


    return y;
}

int main()
{
    int x,y;
    cout << "Input two integers x and y: ";
    cin >> x >> y;

    if (x > 0 && y > 0)
    {
        cout << x << " " << y << " "
                    << gcd (x,y) << "\n";

    }
    return 0;
}
