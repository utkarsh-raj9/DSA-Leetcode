class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int ans = 0;

        for(int i = 0;i< height.size();i++){
            int heights = right - left;
            int mini = min(height[left],height[right]);
            int x = mini * heights;
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
            ans = max(ans,x);

        }
        return ans;
    }
};