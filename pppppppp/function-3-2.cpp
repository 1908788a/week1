
#include <algorithm>

int median_array(int array[], int n) {
    if (n < 1) {
        return 0;
    }
    std::sort(array, array + n);
    if (n % 2 == 0) {
        return (array[n / 2 - 1] + array[n / 2]) / 2;
    } else {
        return array[n / 2];
    }
}
