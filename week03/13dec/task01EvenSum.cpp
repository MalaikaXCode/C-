#include <iostream>
using namespace std;

int evenSum(int start, int end)
{
    int sum = 0;
    for (int i = start; i <= end; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }
    return sum;
}

int main()
{
    int num1, num2;
    cout << "Enter the start of the range: ";
    cin >> num1;
    cout << "Enter the end of the range: ";
    cin >> num2;
    int ans = evenSum(num1, num2);
    cout << "Sum of even numbers: " << ans;
    return 0;
}