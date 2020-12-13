class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int i = 0;
        if(n<=2) return n;
        for(auto el:nums){
            if(i==0 || i==1 || el!=nums[i-2]){
                nums[i++]=el;
            }
        }
        return i;
        
    }
};
