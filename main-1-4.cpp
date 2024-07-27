#include <iostream>
using namespace std;

// Function declaration
int sum_two_arrays(int array[], int secondaryarray[], int n);

int main() {
    // Test data
    int array[] = {1, 2, 3, 4, 5};
    int secondaryarray[] = {5, 4, 3, 2, 1};
    int n = 5;

    // Testing sum_two_arrays function
    cout << "Sum of two arrays: " << sum_two_arrays(array, secondaryarray, n) << endl;

    return 0;
}
