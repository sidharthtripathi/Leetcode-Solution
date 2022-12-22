class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& a) {
        int n = a.size();
        map <int,int> mpp;
        for(int i = 0 ; i<n; i++){
            if(mpp.find(a[i]) == mpp.end())
            mpp.insert({a[i],1});
        }
        // now checking number between 1 to n
        vector <int> ans;
        for(int i = 1; i<=n ; i++){
            if(mpp.find(i) == mpp.end())
            ans.push_back(i);
        }
        return ans;
    }
};