
double sum_even(double array[], int n) {
    if (n < 1) {
        return 0.0;
    }
    double sum = 0.0;
    for (int i = 0; i < n; i += 2) {  // Start at index 0 and increment by 2 to get even indices
        sum += array[i];
    }
    return sum;
}
