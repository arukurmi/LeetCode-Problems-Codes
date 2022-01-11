// You are climbing a staircase. It takes n steps to reach the top.

// Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

 class Solution {
public:
    int climbStairs(int n) {
        if(n == 1 || n==2 || n==3)
            return n;
        
        int dp[n+1];
        dp[1] = 1;
        dp[2] = 2;
        dp[3] = 3;
        
        for(int i=4; i<=n; i++){
            dp[i] = dp[i-1] + dp[i-2];
        }
//         if(n==3){
            
//         }
        return dp[n];
        
    }
};