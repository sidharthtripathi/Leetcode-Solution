class Solution {
public:
    void merge(vector<int>& a, int n, vector<int>& b, int m) {
    vector <int> c;
	int i = 0;
	int j = 0;
	while(i<n and j<m){
		if(a[i]<=b[j]){
			c.push_back(a[i]);
			i++;
		}
		else{
			c.push_back(b[j]);
			j++;
		}
	}
	// once you get of loop
	// it can be due two one of these reason
	if(i>=n){
		// then fill remaining with b
		while(j<m){
			c.push_back(b[j]);
			j++;
		}
	}
	else if(j>=m){
		// then fill with a
		while(i<n){
			c.push_back(a[i]);
			i++;
		}
	}
    a.clear();
    for(int &i : c)
        a.push_back(i);

    }
};