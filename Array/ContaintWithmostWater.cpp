class Solution {
    public int maxArea(int[] height) {
        int n=height.length;
        int ans=0;
        int l=0;
        int r=n-1;
        
        while(l<r){
            int len=r-l;
            int curr= Math.min(height[l],height[r]) * len;
            ans=Math.max(curr, ans);
            if(height[l]< height[r]){
                l++;
            }
            else{
                r--;
            }

        }
        return ans;
    }
}