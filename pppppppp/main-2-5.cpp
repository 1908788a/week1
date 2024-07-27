#include <iostream>
using namespace std;

// Function declaration
bool is_descending(int array[], int n);

int main() {
    // Test data
    int array[] = {5, 4, 3, 2, 1};
    int n = 5;

    // Testing is_descending function
    if (is_descending(array, n)) {
        cout << "The array is in descending order." << endl;
    } else {
        cout << "The array is not in descending order." << endl;
    }

    return 0;
}
