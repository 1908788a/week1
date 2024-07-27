
bool is_fanarray(int array[], int n) {
    if (n < 1) {
        return true;
    }
    int i = 0, j = n - 1;
    while (i < j) {
        if (array[i] != array[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

