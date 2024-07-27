#include <iostream>
using namespace std;

// Function declaration
double array_mean(int array[], int n);

int main() {
    // Test data
    int array[] = {1, 2, 3, 4, 5};
    int n = 5;

    // Testing array_mean function
    cout << "Mean of array: " << array_mean(array, n) << endl;

    return 0;
}
