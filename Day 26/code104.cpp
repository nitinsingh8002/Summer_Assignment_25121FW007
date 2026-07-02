#include <iostream>
using namespace std;

int main()
{
    int answer, score = 0;

    cout << "===== QUIZ APPLICATION =====\n";

    // Question 1
    cout << "\n1. What is the capital of India?\n";
    cout << "1. Mumbai\n";
    cout << "2. New Delhi\n";
    cout << "3. Kolkata\n";
    cout << "4. Chennai\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if(answer == 2)
        score++;

    // Question 2
    cout << "\n2. Which language is used for C++ programming?\n";
    cout << "1. HTML\n";
    cout << "2. Python\n";
    cout << "3. C++\n";
    cout << "4. CSS\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if(answer == 3)
        score++;

    // Question 3
    cout << "\n3. How many days are there in a week?\n";
    cout << "1. 5\n";
    cout << "2. 6\n";
    cout << "3. 7\n";
    cout << "4. 8\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if(answer == 3)
        score++;

    // Display Score
    cout << "\n===== RESULT =====\n";
    cout << "Your Score = " << score << " out of 3" << endl;

    if(score == 3)
        cout << "Excellent!" << endl;
    else if(score == 2)
        cout << "Good Job!" << endl;
    else
        cout << "Keep Practicing!" << endl;

    return 0;
}