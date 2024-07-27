#include <iostream>
using namespace std;

// Function declaration
int median_array(int array[], int n);

int main() {
    // Test data
    int array1[] = {3, 1, 4, 1, 5};
    int n1 = 5;
    int array2[] = {3, 1, 4, 1, 5, 9};
    int n2 = 6;

    // Testing median_array function
    cout << "Median of array1: " << median_array(array1, n1) << endl;
    cout << "Median of array2: " << median_array(array2, n2) << endl;

    return 0;
}

