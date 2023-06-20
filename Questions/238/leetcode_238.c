int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int* answer = (int*)malloc(numsSize * sizeof(int));
    *returnSize = numsSize;

    for (int i = 0, prefix = 1; i < numsSize; i++) {
        answer[i] = prefix;
        prefix *= nums[i];
    }

    for (int i = numsSize - 1, suffix = 1; i >= 0; i--) {
        answer[i] *= suffix;
        suffix *= nums[i];
    }

    return answer;
}