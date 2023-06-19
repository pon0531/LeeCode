#include <stdio.h>

int strStr(char* haystack, char* needle) {
    if (*needle == '\0') {
        return 0;
    }

    int i = 0;
    int j = 0;

	//loop until the end of haystack
    while (haystack[i] != '\0') {

        //compare 2 string array charactor, if equal the both indeics added
        if (haystack[i] == needle[j]) {
            i++;
            j++;

            //check the end of needle , if the needle is over, return the index
            //the index will be current i - current j
            if (needle[j] == '\0') {
                return i - j;
            }
        } 
        //if charactor not equal, the indeics rollback both
        else 
        {
            //haystack index rollback to next i
            i = i - j + 1;

            //needle index rollback to 0
            j = 0;
        }
    }

    return -1;
}