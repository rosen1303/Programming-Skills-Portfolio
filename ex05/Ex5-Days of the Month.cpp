#include <iostream>
using namespace std;

// Exercise Days of the Month. How many days each month has?

int main()
{
    int month;

    cout << "Enter a month number (1-12): ";
    cin >> month;

    if (month == 1 || month == 3 || month == 5 || month == 7 ||
        month == 8 || month == 10 || month == 12)
    {

        cout << "This month has 31 days." << endl;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {

        cout << "This month has 30 days." << endl;
    }
    else if (month == 2)
    {

        cout << "February has 28 days." << endl;
        // (Leap Year month)
    }
    else
    {

        cout << "Invalid month number!" << endl;
    }

    return 0;
}
