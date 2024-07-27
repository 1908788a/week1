#include <iostream>
using namespace std;

// Function declaration
double weighted_average(int array[], int n);

int main() {
    // Test data
    int array1[] = {1, 2, 1, 4, 1, 3};
    int n1 = 6;
    int array2[] = {1, 1, 1, 1, 1, 1};
    int n2 = 6;
    int array3[] = {};
    int n3 = 0;

    // Testing weighted_average function
    cout << "Weighted average of array1: " << weighted_average(array1, n1) << endl;
    cout << "Weighted average of array2: " << weighted_average(array2, n2) << endl;
    cout << "Weighted average of array3 (empty array): " << weighted_average(array3, n3) << endl;

    return 0;
}
