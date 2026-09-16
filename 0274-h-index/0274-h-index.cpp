class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        int n = citations.size();
        int ans = 0;
        
        for(int i = 0;i<n;i++){
            
            // if(citations[i]==0){
            //     continue;
            // }
             if(n-i <=citations[i]){
                ans = max(ans,n-i);

            }
            
        }
        return ans;
    }
};