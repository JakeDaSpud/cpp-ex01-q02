#include <iostream>

// Write an application that will ask a user for their age and output a message telling them
// if they are a Child (under 18), Adult (18 or over) or a Senior Citizen (over 65). Use an if()
// statement for this. Test your programme with a range of values. Record the test values
// and the result of your program.

using namespace std;

void checkAge(int);
int askUserAge();

int main() {

    int age = 1;

    age = askUserAge();

    cout << "Age Input: " << age << endl;
    checkAge(age);

    return 0;

    //Input: 45
    //Output: You are an Adult. (18-64)

    //Input: 0
    //Output: You are a child. (1-17)

    //Input: 0
    //Output: You are a child. (1-17)

    //Input: 67
    //Output: You are a Senior Citizen. (65+)
}

void checkAge(int age) {
    if (age < 18) {
        cout << "You are a child. (1-17)" << endl;
    } else if (age < 65) {
        cout << "You are an Adult. (18-64)" << endl;
    } else {
        cout << "You are a Senior Citizen. (65+)" << endl;
    }
}

int askUserAge() {
    int age;

    cout << "Enter your age:";

    cin >> age;

    return age;
}