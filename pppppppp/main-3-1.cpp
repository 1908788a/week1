#include <iostream>
using namespace std;

// Function declaration
bool is_fanarray(int array[], int n);

int main() {
    // Test data
    int array[] = {1, 2, 3, 2, 1};
    int n = 5;

    // Testing is_fanarray function
    if (is_fanarray(array, n)) {
        cout << "The array is a fan array." << endl;
    } else {
        cout << "The array is not a fan array." << endl;
    }

    return 0;
}
