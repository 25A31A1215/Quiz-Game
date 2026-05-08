#include <iostream>
using namespace std;

int main() {
    int score = 0;
    char answer;

    cout << "🎯 Welcome to Quiz Game!\n";

    // Question 1
    cout << "\n1. What is the capital of India?\n";
    cout << "A. Mumbai\nB. Delhi\nC. Chennai\nD. Kolkata\n";
    cin >> answer;
    if (answer == 'B' || answer == 'b') {
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong! Correct answer is Delhi\n";
    }

    // Question 2
    cout << "\n2. Which language is used for C++?\n";
    cout << "A. Programming\nB. Cooking\nC. Drawing\nD. Singing\n";
    cin >> answer;
    if (answer == 'A' || answer == 'a') {
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong! Correct answer is Programming\n";
    }

    // Question 3
    cout << "\n3. Who is known as the father of computers?\n";
    cout << "A. Newton\nB. Einstein\nC. Charles Babbage\nD. Tesla\n";
    cin >> answer;
    if (answer == 'C' || answer == 'c') {
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong! Correct answer is Charles Babbage\n";
    }

    // Question 4
    cout << "\n4. Which is a looping statement?\n";
    cout << "A. if\nB. for\nC. switch\nD. break\n";
    cin >> answer;
    if (answer == 'B' || answer == 'b') {
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong! Correct answer is for\n";
    }

    // Question 5
    cout << "\n5. What does CPU stand for?\n";
    cout << "A. Central Processing Unit\nB. Computer Personal Unit\nC. Central Print Unit\nD. Control Processing Unit\n";
    cin >> answer;
    if (answer == 'A' || answer == 'a') {
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong! Correct answer is Central Processing Unit\n";
    }

    // Final Score
    cout << "\n🎉 Your Score: " << score << "/5\n";

    if (score == 5)
        cout << "Excellent!\n";
    else if (score >= 3)
        cout << "Good Job!\n";
    else
        cout << "Try Again!\n";

    return 0;
}