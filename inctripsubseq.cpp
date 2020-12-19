class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n=nums.size();
        std::vector<int> p(n),s(n);
        p[0]=nums[0];
        for(int i=1;i<n;i++){
            p[i]=min(p[i-1],nums[i]);
        }

        s[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            s[i]=max(s[i+1],nums[i]);
        }
        
        bool f=0;
        for(int i=1;i<n-1;i++){
            if(nums[i]>p[i-1] && nums[i]<s[i+1]){
                f=1;
            }
        }
        return f;
    }
};
