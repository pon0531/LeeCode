
int min(int a, int b) {
    return a < b ? a : b;
}

int jump(int nums[], int n) {
    int dp[n]; // DP array to store the minimum jumps needed to reach each index
    dp[0] = 0; // Minimum jumps needed to reach the first index is 0

    for (int i = 1; i < n; i++) {
        dp[i] = INT_MAX; // Initialize the minimum jumps to a large value

        for (int j = 0; j < i; j++) {
            
            printf("%d+nums[%d]=%d vs i=%d\n",j,j,j + nums[j],i);
            if (j + nums[j] >= i) {
                // If index j is reachable from index i, update the minimum jumps
                
                printf("min(dp[%d],dp[%d]+1)\n",i,j);
                printf("min(%d,%d)\n",dp[i], dp[j] + 1);
                
                dp[i] = min(dp[i], dp[j] + 1);
            }
            else
            {
                printf("no need to update\n");
            }
        }printf("\n");
    }

    return dp[n - 1]; // Return the minimum jumps needed to reach the last index
}
