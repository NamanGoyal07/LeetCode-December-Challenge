#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    std::vector<vector<string>> ans;

    bool ispald(string s,int n, int st,int end){
        while(st<end){
            if(s[st]!=s[end]) return false;
            st++;
            end--;
        }
        return true;
    }

    void dfs(string s, int n, int st, vector<string> &cur){
        if(st==n){
            ans.push_back(cur);
        }

        for(int i=st;i<n;i++){
            string t=s.substr(st,i-st+1);
            cout << t << endl;
            if(ispald(s,n,st,i)){
                cur.push_back(t);
                dfs(s,n,i+1,cur);
                cur.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        int n=s.size();
        vector<string> cur;
        cur.clear();
        dfs(s,n,0,cur);
        return ans;
    }
};
