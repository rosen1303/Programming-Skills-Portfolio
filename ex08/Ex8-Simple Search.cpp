#include <iostream>
using namespace std;

// Simple Planet Search

int main()
{
    string planets[5] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter"};
    string search;
    bool found = false;

    cout << "Enter a planet to search: ";
    cin >> search;

    for (int i = 0; i < 5; i++)
    {
        if (planets[i] == search)
        {
            found = true;
        }
    }

    if (found)
    {
        cout << "Planet found in the list!" << endl;
    }
    else
    {
        cout << "Planet not found." << endl;
    }

    return 0;
}
