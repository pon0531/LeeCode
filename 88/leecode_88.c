void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {

    //use 3 index for the compare flow
    //i means the last index of num1
    //j means the last index of num2
    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;

    //the end condition will be i = 0 or j = 0
    while (i >= 0 && j >= 0) {

        // if the element of num1 is larger the nums2
        // put the lement of num1 to num1[k], it will be last element of num1
        if (nums1[i] >= nums2[j]) {
            nums1[k] = nums1[i];

            // move i to next
            i--;
        } 
        else 
        {
            // vice versa
            nums1[k] = nums2[j];
            // move j to next
            j--;
        }

        // k move to next every step
        k--;
    }

    // Copy remaining elements from nums2 to nums1 if any
    // num2 maybe remain the last element
    while (j >= 0) {
        nums1[k] = nums2[j];
        j--;
        k--;
    }
}