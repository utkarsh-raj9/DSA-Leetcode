class Solution {
public:
    void sortColors(vector<int>& nums) {

        //Another way other than bubble sort
       int n = nums.size();
       int zeros=0,ones=0,twos=0;
       for(int i =0; i<n;i++){
            if(nums[i] == 0){
                zeros++;

            }
            else if(nums[i]==1){
                ones++;
            }
            else{
                twos++;
            }
       }
       int i =0;
       for(int j = 0;j<zeros;j++){
            nums[i] = 0;
            i++;
       }
        for(int j = 0;j<ones;j++){
            nums[i] = 1;
            i++;
       }
        for(int j = 0;j<twos;j++){
            nums[i] = 2;
            i++;
       }
    }
};