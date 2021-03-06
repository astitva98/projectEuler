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

bool isNotPrime(ll t){
	if(t%100==0)	cout<<'\t'<<t<<endl;
	// ll limit = sqrt(t);
	FORL(j ,2 , t/2){
		if(t%j==0)	return true;
	}
	return false;
}

int main() {
	int i = 1;
	ll t = 2ll;
	FOR(j , 10001){
		// if(t%100==0)	cout<<'\t'<<t<<endl;
		while(isNotPrime(t)){
			t++;
		}
		t++;
	}
	cout<<t-1;
	return 0;
}