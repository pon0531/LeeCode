// use 2 pointer to implement the algorithm
// one for traverse the array
// another one for the track current point
// if find the target value, swap 0 and non zero value
// this problem will check the remains which need to be zero

void moveZeroes(int* nums, int numsSize){

    // keep track current point
    int i = 0;

    // traverse the array
    int j = 0;

    while ( j < numsSize)
    {
        // find the target val 0
        if(nums [j] != 0)
        {
            // swap 0 and no-zero
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            
            // keep track ++ 
            i++;
        }

        // traverse index j ++ each step
        j++;
    }
}