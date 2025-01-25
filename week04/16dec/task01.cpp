#include <iostream>
#include <string>
using namespace std;

string decideActivity(string t, string h);

int main()
{
    string temperature, humidity;
    cout << "Enter temperature(warm/cold): ";
    cin >> temperature;
    cout << "Enter humidity(dry/humid): ";
    cin >> humidity;

    cout << "Recommended activity: ";
    decideActivity(temperature, humidity);
    return 0;
}

string decideActivity(string t, string h)
{
    if (t == "warm" && h == "dry")
    {
        cout << "Play tennis";
    }
    if (t == "warm" && h == "humid")
    {
        cout << "Swim";
    }
    if (t == "cold" && h == "dry")
    {
        cout << "Play basketball";
    }
    if (t == "cold" && h == "humid")
    {
        cout << "Watch TV";
    }
}