int removeDuplicates(int* nums, int numsSize){

    // track pointer for target array
    // keep the first element, i start from 1
    int i = 1;

    // traverse pointer for the array
    // keep the first element, j start from 1
    int j = 1;

    while( j < numsSize)
    {
        // check if duplicate value occur, compare with pointer current element j and previous element i-1
        if(nums[j] != nums[i-1])
        {      
            // assign the non duplicate value
            nums[i] = nums[j];

            // track pointer ++
            i++;
        }

        // traverse pointer ++
        j++;
    }

    return i;
}