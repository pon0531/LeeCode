void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to perform quicksort partition
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] > pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

// Function to perform quicksort
void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        
        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}

int hIndex(int* citations, int citationsSize) {
    // Sort the citations array in non-increasing order
    quicksort(citations, 0, citationsSize - 1);
    
    // Find the h-index
    int h = 0;
    for (int i = 0; i < citationsSize; i++) {
        if (citations[i] >= i + 1) {
            h = i + 1;
        }
        else {
            break;
        }
    }
    
    return h;
}