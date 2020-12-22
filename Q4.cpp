#include "bits/stdc++.h" 
using namespace std; 
#define max(a, b) (a < b ? b : a) 
#define min(a, b) ((a > b) ? b : a) 
#define mod 1e9 + 7 
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++) 
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++) 
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--) 
#define INF 1000000000000000003 
typedef long long int ll; 
typedef vector<int> vi; 
typedef pair<int, int> pi; 
#define F first 
#define S second 
#define PB push_back 
#define POB pop_back 
#define MP make_pair 

bool isPalindrom(string c){
	int s = c.size();
	for(int i=0;i<s;i++){
		if(c[i] != c[s-1-i]){
			return false;
		}
	}
	return true;
}

int main() {

	ll ans = 0;
	FORR(j , 999 , 100){
		FORR(i , 999 , j){
			int c = i*j;
			if(isPalindrom(to_string(c))){
				ans = max(ans , c);
			}
		}
	}
	cout<<ans;
	
	return 0;
}