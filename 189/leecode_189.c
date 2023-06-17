// rotate need the reverse function
// first we need to reverse all elements
// second we need to reverse the k elements and the other (len - k) elements

void reverse(int* nums, int start, int end) {

    // use 2 pointer start and end , keey swap element until all the element are swapped
    while (start < end) {

        //swap start and end element
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        
        // pointer move to middle of the array
        start++;
        end--;
    }
}

void rotate(int* nums, int numsSize, int k) {

    k = k % numsSize; // handle cases where k > numsSize

    // Reverse the entire array
    reverse(nums, 0, numsSize - 1);

    // Reverse the first k elements
    reverse(nums, 0, k - 1);

    // Reverse the remaining elements
    reverse(nums, k, numsSize - 1);
}