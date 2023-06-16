# Solution:
Overall, the solution works by iterating through both strings and comparing their characters.
If the current characters match, it moves the pointer for s to the next character. If s is a
subsequence of t, the pointer for s will reach the end of s before the pointer for t reaches 
the end of t.

# Time complexity:
O(m+n)

# Space complexity:
O(1)