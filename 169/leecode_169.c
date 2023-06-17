// Moore voting algorithm
// if count equal 0, the majority record current element
// else if major equal element, count++
// else count--
/*
[A] major = A, count = 1
[A] major = A, count = 2
[C] major = A, count = 1
[C] major = A, count = 0
[B] major = B, count = 1
[B] major = B, count = 2
[B] major = B, count = 3
[A] major = B, count = 2
[A] major = B, count = 1
[C] major = B, count = 0
[C] major = C, count = 1
[C] major = C, count = 2
*/
int majorityElement(int* nums, int numsSize) {
    
    // majority to record the element
    int majority = nums[0];

    // count to record the difference of elements
    int count = 1;

    for (int i = 1; i < numsSize; i++) {
        if (count == 0) {
            majority = nums[i];
            count = 1;
        } else if (nums[i] == majority) {
            count++;
        } else {
            count--;
        }
    }

    return majority;
}