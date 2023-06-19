int maxSubArray(int* arr, int size){
    int max_so_far = arr[0];  // 当前最大连续和
    int max_ending_here = arr[0];  // 包含当前元素的最大连续和

    for (int i = 1; i < size; i++) {
        // 更新包含当前元素的最大连续和
        max_ending_here = (max_ending_here + arr[i] > arr[i]) ? max_ending_here + arr[i] : arr[i];

        // 更新当前最大连续和
        max_so_far = (max_so_far > max_ending_here) ? max_so_far : max_ending_here;
    }

    return max_so_far;
}