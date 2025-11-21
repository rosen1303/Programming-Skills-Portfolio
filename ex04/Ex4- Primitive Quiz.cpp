#include <iostream>
#include <string>
using namespace std;

// Exercise 04: Primitive Quiz with 3 questions inlduded and Final Score shown at the end
// Some parts of this code were created with help from ChatGPT 5.1.
// Prompt used: "Write a simple primitive quiz in C++ with 3 questions"

int main()
{
    int score = 0;
    string answer;

    cout << "Welcome to the Ross Quiz!" << endl;
    cout << "Answer the following questions to Pass or Fail:\n"
         << endl;

    // Question 1
    cout << "1. What is 2 + 2? ";
    cin >> answer;
    if (answer == "4")
    {
        cout << "Correct!\n";
        score++;
    }
    else
    {
        cout << "Wrong! The answer is 4.\n";
    }

    // Question 2
    cout << "2. What is the capital of United Kingdom? ";
    cin >> answer;
    if (answer == "London" || answer == "london")
    {
        cout << "Correct!\n";
        score++;
    }
    else
    {
        cout << "Wrong! The answer is London.\n";
    }

    // Question 3
    cout << "3. True or False: The sun rises in the west? ";
    cin >> answer;
    if (answer == "False" || answer == "false")
    {
        cout << "Correct!\n";
        score++;
    }
    else
    {
        cout << "Wrong! The correct answer is False.\n";
    }

    cout << "\nYou got " << score << " out of 3 correct." << endl;
    cout << "Thanks for playing Ross Quiz!" << endl;

    return 0;
}
