class Solution {
public:
    vector<int> getRow(int n) {
        if(n==0){
            vector <int> base_case = {1};
            return base_case;
        }
unsigned long long ncrm1 = n;
vector <int> ans = {1,n};
unsigned long long ncr = 1;
for(int r = 2 ; r<=n ; r++){
	ncr = (ncrm1*(n-r+1))/r;
	ans.push_back(ncr);
	ncrm1 = ncr;
}
return ans; 
}
};