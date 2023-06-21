/*
reference link:
https://medium.com/@havbgbg68/leetcode-1-two-sum-python-8d77c223abd3

*/
typedef struct {
    int value;
    int index;
} Element;

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    Element* hashTable = (Element*)malloc(numsSize * sizeof(Element));

    for (int i = 0; i < numsSize; i++) {
        int complement = target - nums[i];
        for (int j = 0; j < i; j++) {
            if (hashTable[j].value == complement) {
                int* result = (int*)malloc(2 * sizeof(int));
                result[0] = hashTable[j].index;
                result[1] = i;
                *returnSize = 2;
                free(hashTable);
                return result;
            }
        }

        hashTable[i].value = nums[i];
        hashTable[i].index = i;
    }

    free(hashTable);
    return NULL;
}