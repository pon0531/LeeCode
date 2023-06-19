int removeDuplicates(int* nums, int numsSize) {

    // tracker pointer for target array
    int i = 2;

    // traverse pointer for array
    int j = 2;

    // test case, if numsSize equal 1, return 1
    if(numsSize == 1)
        return 1;

    while(j<numsSize)
    {
        // check if duplicate value occur
        // compare the pointers between current element j and previous 2 element i-1 and i-2
        // both cases need to be assign the new element 
        if((nums[j] == nums[i-1]) && (nums[j] != nums[i-2]) 
        || (nums[j] != nums[i-1]) && (nums[j] != nums[i-2]) )
        {
            nums[i] = nums[j];
            i++;
        }
        j++;
    }
    
    // return the element counts of the target array
    return i;
}