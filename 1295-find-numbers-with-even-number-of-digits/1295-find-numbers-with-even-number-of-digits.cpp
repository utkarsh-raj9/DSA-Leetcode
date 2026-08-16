class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        
        
        for(int i = 0;i<nums.size();i++){
            int m = nums[i];
            int digits = 0;
            while(m > 0){
                m = m/10;
                digits++;
            }
            if(digits%2 == 0){
                count++;
            }
            
        }
        return count;
    }
};