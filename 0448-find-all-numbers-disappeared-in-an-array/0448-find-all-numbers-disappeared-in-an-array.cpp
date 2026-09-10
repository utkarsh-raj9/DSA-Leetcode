class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(),nums.end());
      for(int i = 1; i < nums[0]; i++) {
            ans.push_back(i);
        }

        for(int i = 1;i<nums.size();i++){
             if(nums[i]==nums[i-1]){
                continue;
            }
               
            if(nums[i] != nums[i-1]){
                for(int j = nums[i-1]+1;j<nums[i];j++){
                ans.push_back(j);
            }
            }
        
           
        }
         int last = nums[nums.size()-1];
      
        for(int i = last + 1; i <= nums.size(); i++) {
            ans.push_back(i);
        }
        return ans;
        
    }
};