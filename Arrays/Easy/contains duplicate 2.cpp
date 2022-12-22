class Solution {
public:
    int inline abs(int i){
        if(i>0)
            return i;
        else
            return -i;
    }
    bool containsNearbyDuplicate(vector<int>& a, int k) {
        int n = a.size();
map <int,int> check;
for(int i = 0 ; i<n ; i++){
	if(check.find(a[i]) == check.end()){
		check.insert({a[i],i});
    }
	else{
		if(abs(i-check.find(a[i])->second) <= k)
			return true;
		else{
			check.find(a[i])->second = i;
		}
	}
	}
    return false;  
}  
};