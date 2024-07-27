#include <iostream>
using namespace std;

// Function declaration
int num_count(int array[], int n, int number);

int main() {
    // Test data
    int array[] = {1, 2, 3, 4, 5};
    int n = 5;
    int number = 3;

    // Testing num_count function
    cout << "Count of number 3 in array: " << num_count(array, n, number) << endl;

    return 0;
}
