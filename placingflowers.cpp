class Solution {
public:
    bool canPlaceFlowers(vector<int>& a, int n) {
        int i=0;
        int m=a.size();
        int cur=0;
        
        bool f=1;
        for(int k=0;k<m;k++){
            if(a[k]==1) f=0;
        }
        
        
        if(f==1){
            cur=(m+1)/2;
            return cur>=n;
            
        }
        
        if(m==0 && n==0) return 1;
        while(i<m && a[i]==0) i++;
        cur+=(i)/2;
        
        
        while(i<m){
            if(a[i]==1){
                i++;
                continue;
            }
            else{
                int j=i;
                while(j<m && a[j]==0) j++;
                j--;
                int len=j-i+1;
                if(j!=m-1)
                    cur+=(len-1)/2;
                else cur+=len/2;
                i=j+1;
            }
        }
        
        return cur>=n;
        
    }
};
