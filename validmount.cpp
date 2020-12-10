class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n=arr.size();
        int i=0;
        int p=-1;
        while(i<n-1){
            if(arr[i+1]>arr[i]) i++;
            else{
                p=i;
                break;
            }
        }
        
        if(p==-1 || p==0) return 0;
        while(i<n-1){
            if(arr[i]>arr[i+1]) i++;
            else break;
        }
        
        if(i==n-1) return 1;
        return 0;
        
    }
};
