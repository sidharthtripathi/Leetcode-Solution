class Solution {
public:
    void moveZeroes(vector<int>& a) {
        int n = a.size();
        int i = 0 , j = 0;
        bool once = false;
        while(i<n and j<n){
            if(a[i]==0){
                if(once == false){
                j = i + 1;
                once = true;
                }
                while(j<n and a[j]==0)
                j++;
                if(j>=n)
                return;
                //swap with j
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            i++;
        }
    }
};