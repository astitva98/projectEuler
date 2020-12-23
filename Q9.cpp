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
int main() {
	for(int c=3;c<1000;c++){
		for(int b=2;b<c;b++){
			for(int a=1;a<b;a++){
				if(a+b+c==1000&&a*a+b*b==c*c){
					cout<<a*b*c<<endl;
					return 0;
				}
			}
		}
	}
	cout<<"BABUSHKAA";
	return 0;
}