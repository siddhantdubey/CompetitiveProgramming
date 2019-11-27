#include <bits/stdc++.h>
#include <cmath>

using namespace std;

typedef long long ll;



int main(){
    ll n, ans;
	cin >> n;
	ans = n+1;
	for(ll i = 1; i*i <= n; i++) {
		if(n%i) continue;
		ans = min(ans, i + (n/i));
	}
	cout << ans-2;

    
}