class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;

        int low = 0;
        int high = nums.size()-1;
        int store = -1;
        
        //first
        while(low<= high){
           int mid = low + (high - low)/2;

            if(nums[mid] == target){
                store = mid;
                high  = mid -1;
            }
            else if(nums[mid] < target){
                low = mid + 1;
            }
            else{
                high = mid -1;
            } 
                
        }
        ans.push_back(store);
        
        //last
         low = 0;
        high = nums.size()-1;
        store = -1;
        
        while(low<= high){
         int   mid = low + (high - low)/2;
        if(nums[mid] == target){
                store = mid;
                low  = mid + 1;
            }
              else if(nums[mid] < target){
                low = mid + 1;
            }
          else{
                high = mid -1;
            } 
        }
        ans.push_back(store);

        return ans;
    }
};