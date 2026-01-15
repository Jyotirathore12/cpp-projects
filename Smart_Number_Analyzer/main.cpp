#include <iostream>
using namespace std;

/* ---------- Function Declarations ---------- */

// Checks if number is prime
bool isPrime(int n);

// Checks if number is even
bool isEven(int n);

// Checks if number is palindrome
bool isPalindrome(int n);

// Checks if number is an Armstrong number
bool isArmstrong(int n);

// Checks if number is a perfect number
bool isPerfect(int n);

// Displays all analysis results
void analyzeNumber(int n);

/* ---------- Main Function ---------- */

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    analyzeNumber(number);

    return 0;
}

/* ---------- Function Definitions ---------- */

bool isPrime(int n) {
    // TODO: implement prime check
    return false;
}

bool isEven(int n) {
    // TODO: check even or odd
    return false;
}

bool isPalindrome(int n) {
    // TODO: check palindrome
    return false;
}

bool isArmstrong(int n) {
    // TODO: check armstrong number
    return false;
}

bool isPerfect(int n) {
    // TODO: check perfect number
    return false;
}

void analyzeNumber(int n) {
    cout << "\nAnalysis Result:\n";

    // TODO: call all check functions
}
