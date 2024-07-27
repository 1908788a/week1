#include <iostream>
using namespace std;

// Function declaration
int max_element(int array[], int n);

int main() {
    // Test data
    int array[] = {3, 1, 4, 1, 5};
    int n = 5;

    // Testing max_element function
    cout << "Maximum element: " << max_element(array, n) << endl;

    return 0;
}
