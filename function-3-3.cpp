
double weighted_average(int array[], int n) {
    if (n < 1) {
        return 0.0;
    }
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += array[i] * (1.0 / n);
    }
    return sum;
}
