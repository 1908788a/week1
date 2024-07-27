#include <iostream>
using namespace std;

// Function declaration
void print_pass_fail(char grade);

int main() {
    // Test data
    char grade = 'B';

    // Testing print_pass_fail function
    cout << "Grade " << grade << ": ";
    print_pass_fail(grade);

    grade = 'E';
    cout << "Grade " << grade << ": ";
    print_pass_fail(grade);

    grade = 'X';
    cout << "Grade " << grade << ": ";
    print_pass_fail(grade);

    return 0;
}

