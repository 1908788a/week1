#include <iostream>
using namespace std;

// Function declaration
int array_sum(int array[], int n);

int main() {
    // Test data
    int array[] = {1, 2, 3, 4, 5};
    int n = 5;

    // Testing array_sum function
    cout << "Sum of array: " << array_sum(array, n) << endl;

    return 0;
}
