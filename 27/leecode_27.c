int removeElement(int* nums, int numsSize, int val) {

    // keep track the current position where elements no equal val, should be placed
    int i = 0;

    //use j to traverse  the array
    int j = 0;

    while (j < numsSize) {

        // if nums[j] not equal the value, put it to the array nums, track pointer i ++
        if (nums[j] != val) {
            nums[i] = nums[j];
            i++;
        }

        // traverse index j alwasy ++
        j++;
    }

    // return the track pointer counts
    return i;
}