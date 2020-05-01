class Solution {
public:
    int firstBadVersion(int n) {
        int low,high;
        low=1,high=n;
        int mid;
        while(high>low){
            mid=low+(high-low) / 2;
            if( isBadVersion( mid ) ) 
                high=mid;
            else
                low=mid+1;
        }
        int ans=low;
        return ans;
    }
};