#include "bits/stdc++.h" 
using namespace std; 
#define max(a, b) (a < b ? b : a) 
#define min(a, b) ((a > b) ? b : a) 
#define mod 1e9 + 7 
#define FOR(a, c) for (long long int(a) = 0; (a) < (c); (a)++) 
#define FORL(a, b, c) for (long long int(a) = (b); (a) <= (c); (a)++) 
#define FORR(a, b, c) for (long long int(a) = (b); (a) >= (c); (a)--) 
#define INF 1000000000000000003 
typedef long long int ll; 
typedef vector<int> vi; 
typedef pair<int, int> pi; 
#define F first 
#define S second 
#define PB push_back 
#define POB pop_back 
#define MP make_pair 

bool isPrime(ll n){
	ll p = sqrt(n);
	FORL(i, 2, p)
		if(n%i==0)	return false;
	// cout<<" is : "<<n<<endl;
	return true;
}

ll findNextPrime(ll n){
	// cout<<"next prime of "<<n;
	n++;
	while(!isPrime(n)){
		n++;
	}	
	return n;
}

ll findLargdestPrimeFactor(ll n){
	if(n==1)	return 1ll;
	if(n==0)	return 0ll;
	if(n==2)	return 2ll;
	ll breakCondition = sqrt(n);
	ll possibleAns = 1;
	ll currentFactor = 2ll;
	while(currentFactor <= breakCondition){
		ll nextFactor = findNextPrime(currentFactor);
		if(n%nextFactor == 0){
			possibleAns = nextFactor;
		}
		currentFactor = nextFactor;
	}
	return possibleAns;
}

int main(int agrc, char** argv) {

	ll n = stoll(argv[1]);

	cout<<findLargdestPrimeFactor(n);
	
	return 0;
}