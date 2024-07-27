#include <iostream>
using namespace std;

// Function declaration
int min_element(int array[], int n);

int main() {
    // Test data
    int array[] = {3, 1, 4, 1, 5};
    int n = 5;

    // Testing min_element function
    cout << "Minimum element: " << min_element(array, n) << endl;

    return 0;
}
