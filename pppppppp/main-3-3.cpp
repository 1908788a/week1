#include <iostream>
using namespace std;

// Function declaration
double weighted_average(int array[], int n);

int main() {
    // Test data
    int array[] = {1, 2, 1, 4, 1, 3};
    int n = 6;

    // Testing weighted_average function
    cout << "Weighted average of array: " << weighted_average(array, n) << endl;

    return 0;
}
