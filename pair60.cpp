class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int n=time.size();
        int a[60];
        map<int,int> mp,mp2;
        memset(a,0,sizeof(a));
        for(int i=0;i<n;i++){
            a[time[i]%60]++;
            if(time[i]%60==30) mp[time[i]]++;
            if(time[i]%60==0) mp2[time[i]]++;
        }

        int ans=0;
        for(int i=1;i<30;i++){
            
            ans+=a[60-i]*a[i];
        }
        cout << ans << endl;
        int cur=0;
        bool f=0;
        for(auto i:mp){
            cur+=i.second;
            f=1;
        }
        if(f)
        ans+=cur*(cur-1)/2;
        cur=0;
        f=0;
        for(auto i:mp2){
            cur+=i.second;
            f=1;
        }
        if(f)
            ans+=cur*(cur-1)/2;
        return ans;
    }
};
