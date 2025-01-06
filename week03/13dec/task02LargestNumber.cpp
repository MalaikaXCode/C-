#include <iostream>
using namespace std;
int main()
{
    int n, max = 0;

    while (n != -1)
    {
        cout << "Enter a number(-1 to stop): ";
        cin >> n;

        if (n > max)
        {
            max = n;
        }
    }

    cout << "The largest number is: " << max;
    return 0;
}
