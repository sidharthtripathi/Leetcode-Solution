class Solution {
public:
    bool containsDuplicate(vector<int>& a) {
        int n = a.size();
map <int,int> check;
for(int i = 0 ; i<n ; i++){
	if(check.find(a[i]) == check.end()){
		check.insert({a[i],1});
	}
	else{
		if(check.find(a[i])->second == 1)
			return true;
		else if(check.find(a[i])->second == 0)
				check.find(a[i])->second++;
	}
}
return false;
    }
};