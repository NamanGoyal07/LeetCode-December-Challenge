class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int top=0,bottom=n-1,left=0,right=n-1;
        vector<vector<int>> ans(n,vector<int>(n,0));
        int c=1;
        while(c<=n*n){
            for(int i=left;i<=right;i++){
                ans[top][i]=c++;
            }
            
            top++;
            for(int i=top;i<=bottom;i++){
                ans[i][right]=c++;
            }
            
            right--;
            for(int i=right;i>=left;i--){
                ans[bottom][i]=c++;
            }
            
            bottom--;
            
            for(int i=bottom;i>=top;i--){
                ans[i][left]=c++;
            }
            
            left++;
        }
        
        return ans;
        
    }
};
