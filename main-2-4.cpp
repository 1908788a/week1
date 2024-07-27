#include <iostream>
using namespace std;

// Function declaration
bool is_ascending(int array[], int n);

int main() {
    // Test data
    int array[] = {1, 2, 3, 4, 5};
    int n = 5;

    // Testing is_ascending function
    if (is_ascending(array, n)) {
        cout << "The array is in ascending order." << endl;
    } else {
        cout << "The array is not in ascending order." << endl;
    }

    return 0;
}
