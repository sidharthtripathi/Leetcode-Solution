class Solution {
public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        int n = a.size();
        int m = b.size();
       map <int,int> mpp;
// first filling unique elements from a
for(int i = 0 ; i<n ; i++){
	if(mpp.find(a[i]) == mpp.end()){
		mpp.insert({a[i],1});
	}
}
vector <int> ans;
//now checking values common between a and b
for(int i = 0 ; i<m ; i++){
	if(mpp.find(b[i])!=mpp.end() and mpp.find(b[i])->second!=0){
		ans.push_back(b[i]);
		mpp.find(b[i])->second--;
	}
}
    return ans;
    }
};