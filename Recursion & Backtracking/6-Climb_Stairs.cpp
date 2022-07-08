int countDistinctWayToClimbStair(long long nStairs)
{
    // Code Studio

    // base case
    if (nStairs < 0)
        return 0; // no of ways
    if (nStairs == 0)
        return 1; // no of ways

    // RR
    int ans = countDistinctWayToClimbStair(nStairs - 1) 
              + countDistinctWayToClimbStair(nStairs - 2);

    return ans;
}