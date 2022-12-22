class Solution {
public:
    int missingNumber(vector<int>& a) {
        unsigned long long n = a.size();
//calculating sum using formula
unsigned long long X = (n*(n+1))/2;
unsigned long long Y = 0;
for(int i = 0 ;i<n; i++)
	Y = Y + a[i];

unsigned long long X2 = (n*(n+1)*(2*n+1))/6;
unsigned long long Y2 = 0;
for(int i = 0 ; i<n ; i++)
	Y2 = Y2 + a[i]*a[i];
long long a2 = X2 - Y2;
long long a1 = X - Y;
if(a1==0){
	return 0;
}
return ((a2/a1 + a1))/2;
    }
};