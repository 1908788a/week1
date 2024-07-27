#include <iostream>
using namespace std;

// Function declaration
void two_five_nine(int array[], int n);

int main() {
    // Test data
    int array[] = {2, 5, 9, 2, 5, 9, 2, 9};
    int n = 8;

    // Testing two_five_nine function
    cout << "Count of 2, 5, and 9: ";
    two_five_nine(array, n);

    return 0;
}
