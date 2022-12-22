class Solution {
public:
    int islandPerimeter(vector<vector<int>>& a) {
    int p = 0;
	for(int i = 0 ; i<a.size(); i++){
		for(int j = 0 ; j<a[i].size() ; j++){
			if(a[i][j] == 1){
				p = p + 4;
				// checking top and left
				// checking top
				if(i!=0 and a[i-1][j]==1)
					p = p - 2;
				//checking left
				if(j!=0 and a[i][j-1]==1)
					p = p-2;
			}
		}
	}
	return p;   
    }
};