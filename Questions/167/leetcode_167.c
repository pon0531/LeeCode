int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    *returnSize = 2;
    int* indices = (int*)malloc(sizeof(int) * 2);

    // use two pointers
    int left = 0;
    int right = numbersSize - 1;

    while (left < right) {

        if ((numbers[left] + numbers[right]) == target) {
            indices[0] = left + 1;
            indices[1] = right + 1;
            return indices;
        }
        else if(((numbers[left] + numbers[right])) < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }

    // No solution found
    return NULL;
}