
double weighted_average(int array[], int n) {
    if (n < 1) {
        return 0.0;
    }
    double sum = 0.0;
    int count[101] = {0};  // 假设元素值范围为0到100，可以根据实际范围调整

    for (int i = 0; i < n; i++) {
        count[array[i]]++;
    }

    for (int i = 0; i < n; i++) {
        sum += array[i] * (count[array[i]] / static_cast<double>(n));
    }

    return sum;
}

