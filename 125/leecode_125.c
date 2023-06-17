bool isPalindrome(char *s) {
    int left = 0;
    int right = strlen(s) - 1;
    
    while (left < right) {
        // Skip non-alphanumeric characters from the left
        while (left < right && !isalnum(s[left])) {
            left++;
        }
        
        // Skip non-alphanumeric characters from the right
        while (left < right && !isalnum(s[right])) {
            right--;
        }
        
        // Convert characters to lowercase and compare
        if (tolower(s[left]) != tolower(s[right])) {
            return false;
        }
        
        // Move to the next pair of characters
        left++;
        right--;
    }
    
    return true;
}