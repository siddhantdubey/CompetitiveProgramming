#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long int llt;
 
//There is an implementation of binary search in here, very kewl.


llt getDigit(llt x){
	llt ans=0;
	while(x!=0){
		x/=10;
		++ans;
	}
	return ans;
}
		
 
int main(){
	llt a, b;
	cin >> a >> b;
	llt x;
	cin >> x;
	if(x >= a*1000000000 + b*10) cout << 1000000000 << endl;
	else if(x < a+b) cout << 0 << endl;
	else{
		llt r = 1000000000;
		llt l = 0;
		llt mid = (r + l)/2;
		while(r-1>l){
			mid = (r+l)/2;
			llt d = getDigit(mid);
			if(x< a*mid + b*d) r = mid;
			else l = mid;
		}
		cout << l << endl;
	}
			
		
	
	return 0;
}
