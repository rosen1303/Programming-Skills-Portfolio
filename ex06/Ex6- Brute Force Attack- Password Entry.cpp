#include <iostream>
using namespace std;

int main()
{
    string password = "Break-in";
    string guess;

    cout << "Enter the password: ";
    cin >> guess;

    while (guess != password)
    {
        cout << "Wrong password. Try again: ";
        cin >> guess;
    }

    cout << "Access granted!" << endl;

    return 0;
}
