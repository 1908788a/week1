#include <iostream>
using namespace std;

// Function declaration
int median_array(int array[], int n);

int main() {
    // Test data
    int array[] = {3, 1, 4, 1, 5};
    int n = 5;

    // Testing median_array function
    cout << "Median of array: " << median_array(array, n) << endl;

    return 0;
}
