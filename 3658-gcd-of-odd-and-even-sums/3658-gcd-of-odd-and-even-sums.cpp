class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int odd = 0;
        int even = 0;
        
        for(int i = 1;i<=n;i++){
           odd = odd + (2*i -1);
           even = even+(2*i);
        }
        return gcd(odd,even);
    }
};