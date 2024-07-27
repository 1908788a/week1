#include <iostream>
using namespace std;

// Function declaration
int count_evens(int number);

int main() {
    // Test data
    int number = 4;

    // Testing count_evens function
    cout << "Count of evens up to " << number << ": " << count_evens(number) << endl;

    return 0;
}
