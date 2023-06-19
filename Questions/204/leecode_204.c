int countPrimes(int n) {
    if (n <= 2) {
        return 0;
    }

    // Create a boolean array to store prime information
    bool *isComposite = (bool *)malloc(n * sizeof(bool));

    // initial the value to 0
    for (int i = 0; i < n; i++) {
        isComposite[i] = false;
    }

    int count = 0;

    // iterate the i from 2 to sqrt n
    for (int i = 2; i * i < n; i++) {

        // 2=> 2 is prime, 2^2,2^2+2,2^2+4....
        // 3=> 3 is pime, 3^2, 3^2+3, 3^2+6....
        if (!isComposite[i]) {
            for (int j = i * i; j < n; j += i) {
                isComposite[j] = true;
            }
        }
    }

    // count the prime numbers
    for (int i = 2; i < n; i++) {
        if (!isComposite[i]) {
            count++;
        }
    }

    free(isComposite);
    return count;
}