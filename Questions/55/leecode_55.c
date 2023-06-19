// use greedy algorithm

bool canJump(int* nums, int numsSize) {
    int maxReach = 0;

    // iterate the array until numsSize - 1
    for (int i = 0; i < numsSize - 1; i++) {

        // check the maxReach and i, if i > maxReach mean it cant be reached
        if (i > maxReach) {
            printf("i=%d,maxReach=%d\n",i,maxReach);
           return false;
        }

        // find the maxReach in each iteration
        maxReach = fmax(maxReach, i + nums[i]);
    }

    return maxReach >= numsSize - 1;
}