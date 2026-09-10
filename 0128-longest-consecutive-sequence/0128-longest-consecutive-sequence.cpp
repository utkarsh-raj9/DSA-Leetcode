class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ans = 1;
        int count = 1;
        
        sort(nums.begin(),nums.end());

        if(nums.size() == 0){
            return 0;
        }
       
            for(int i =1;i<nums.size();i++){
                
                if(nums[i] == nums[i - 1] +1){
                    count++;
                }
                else if(nums[i] == nums[i-1]){
                    continue;
                }
                else{
                    count =1;
                }
                ans = max(count , ans);
            }
            return ans;
        

    }
};