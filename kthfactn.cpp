class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> f;
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                f.push_back(i);
            }
            if(n%i==0 && i*i!=n) f.push_back(n/i);
        }
        
        k--;
        sort(f.begin(),f.end());
        if(f.size()<=k) return -1;
        return f[k];
        
    }
};
