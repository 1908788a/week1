#include <iostream>
using namespace std;

// Function declaration
double sum_even(double array[], int n);

int main() {
    // Test data
    double array[] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0};
    int n = 6;

    // Testing sum_even function
    cout << "Sum of elements at even positions: " << sum_even(array, n) << endl;

    return 0;
}
