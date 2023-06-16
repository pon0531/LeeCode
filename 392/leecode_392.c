#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool isSubsequence(char *s, char *t) {
    int sLen = strlen(s);
    int tLen = strlen(t);
    
    int sIndex = 0;
    int tIndex = 0;
    
    while (sIndex < sLen && tIndex < tLen) {
        if (s[sIndex] == t[tIndex]) {
            sIndex++;
        }
        
        tIndex++;
    }
    
    return sIndex == sLen;
}

int main() {
    // Example input strings
    char s[] = "abc";
    char t[] = "ahbgdc";

    // Check if s is a subsequence of t
    bool result = isSubsequence(s, t);

    // Print the result
    if (result) {
        printf("s is a subsequence of t.\n");
    } else {
        printf("s is not a subsequence of t.\n");
    }

    return 0;
}