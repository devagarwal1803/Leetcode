class Solution {
public:
    int arrangeCoins(int n) {
        int ans = (sqrt(1+8LL*n)-1)/2;
        return ans;
    }
};
