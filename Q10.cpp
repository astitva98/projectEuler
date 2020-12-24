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

bool isPrime(ll a){
	FORL(s , 2 , sqrt(a)+1){
		if(a%s==0)	return false;
	}
	return true;
}

int main() {
	ll si = 5;
	FORL(a ,5, 2000000){
		if(isPrime(a))	si+=a;
		a++;
	}
	cout<<si;
	return 0;
}