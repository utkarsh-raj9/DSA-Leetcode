class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
       int index = INT_MIN;
       vector<bool> ans;
       for(int i = 0;i<candies.size();i++){
        if(candies[i] > index){
            index = candies[i];
        }
       }
       for(int i = 0;i<candies.size();i++){
            int each = candies[i] + extraCandies;
        if(each >= index){
            ans.push_back(true);
        }else{
            ans.push_back(false);
        }
       }

        return ans;
    }
};