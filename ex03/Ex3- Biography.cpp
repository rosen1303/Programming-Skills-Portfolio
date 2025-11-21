#include <iostream>
#include <string>
using namespace std;

// Exercise 03: Biography

int main()
{
    // This program asks for personal details and prints a short biography

    string name, hobby;
    int age;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;

    cin.ignore(); // clears leftover newline meaning Ignore whatever’s still sitting in the input buffer from the last input

    cout << "Enter your favourite hobby: ";
    getline(cin, hobby);

    cout << "\n--- Biography ---" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Hobby: " << hobby << endl;
    cout << name << " is " << age << " years old and loves " << hobby << "!" << endl;

    return 0;
}
