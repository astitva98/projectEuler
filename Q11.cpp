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
typedef vector<long long int> vll; 
typedef pair<int, int> pi; 
#define F first 
#define S second 
#define PB push_back 
#define POB pop_back 
#define MP make_pair 

ll h1(vi v){
	ll ans = 0;
	ll pans = 0;
	int g =0 ;
	FOR(i,20){
		g=0;
		pans = 1;
		FOR(j,17){
			if(v[i*20+j]==0){
				g=0;
				pans=1;
				continue;
			}
			if(g<4){
				pans = pans*v[i*20+j];
				// ans = max(ans,pans);
				g++;
				continue;
			}
			ans = max(ans,pans);
			pans/=v[i*20+j-4];
			pans*=v[i*20+j];
			ans = max(ans,pans);
		}
	}

	return ans;
}

ll h4(vi v){
	ll ans = 0;
	ll pans = 0;
	int g =0 ;
	FOR(i,20){
		g=0;
		pans = 1;
		FOR(j,17){
			if(v[i+j*20]==0){
				g=0;
				pans=1;
				continue;
			}
			if(g<4){
				pans = pans*v[i+j*20];
				// ans = max(ans,pans);
				g++;
				continue;
			}
			ans = max(ans,pans);
			pans/=v[i+j*20-80];
			pans*=v[i+j*20];
			ans = max(ans,pans);
		}
	}

	return ans;
}
ll h3(vi v){
	ll ans = 0;
	ll pans = 0;
	int g =0 ;
	FOR(i,20){
		int j = i;
		g=0;
		pans = 1;
		while(j%20!=0){
			if(v[j]==0){
				g=0;
				pans=1;
				j+=19;
				continue;
			}
			if(g<4){
				pans = pans*v[j];
				// ans = max(ans,pans);
				j+=19;
				g++;
				continue;
			}
			ans = max(ans,pans);
			pans/=v[j-19-19-19-19];
			pans*=v[j];
			ans = max(ans,pans);
			j+=19;
		}
	}
	g=0;pans=0;
	FOR(i,20){
		i=19*i;
		int j = i;
		g=0;
		pans = 1;
		while(j<400){
			if(v[j]==0){
				g=0;
				pans=1;
				j+=19;
				continue;
			}
			if(g<4){
				pans = pans*v[j];
				// ans = max(ans,pans);
				j+=19;
				g++;
				continue;
			}
			ans = max(ans,pans);
			pans/=v[j-19-19-19-19];
			pans*=v[j];
			ans = max(ans,pans);
			j+=19;
		}
	}
	return ans;
}
ll h2(vi v){
	ll ans = 0;
	ll pans = 0;
	int g =0 ;
	FOR(i,20){
		i=20*i;
		int j = i;
		g=0;
		pans = 1;
		while(j<400){
			if(v[j]==0){
				g=0;
				pans=1;
				j+=21;
				continue;
			}
			if(g<4){
				pans = pans*v[j];
				// ans = max(ans,pans);
				j+=21;
				g++;
				continue;
			}
			ans = max(ans,pans);
			pans/=v[j-21-21-21-21];
			pans*=v[j];
			ans = max(ans,pans);
			j+=21;
		}
	}
	pans = 0;
	g=0;
	FOR(i,20){
		int j = i;
		g=0;
		pans = 1;
		while(j%19!=0){
			if(v[j]==0){
				g=0;
				pans=1;
				j+=21;
				continue;
			}
			if(g<4){
				pans = pans*v[j];
				// ans = max(ans,pans);
				j+=21;
				g++;
				continue;
			}
			ans = max(ans,pans);
			pans/=v[j-21-21-21-21];
			pans*=v[j];
			ans = max(ans,pans);
			j+=21;
		}
	}
	return ans;
}

int main() {
	string pattern = "08022297381500400075040507785212507791084949994017811857608717409843694804566200814931735579142993714067538830034913366552709523046011426924685601325671370236912231167151676389419236542240402866331380244732609903450244753353783684203517125032988128642367102638406759547066183864706726206802621220956394396308409166499421245558056673992697177878968314883489637221362309750076442045351400613397343133957817532822753167159403800462161409535692163905429635314755588824001754243629855786560048357189070544443744602158515417581980816805944769287392138652177704895540045208839735991607975732162626793327986688366887576220720346336746551232639353690442167338253911249472180846293240627636206936417230238834629969826759857404361620733529783190017431497148868116235705540170547183515469169233486143520189196748";
	vi vec;
	int s = pattern.size()/2;
	FOR(i , s){
		char fst = pattern[2*i];
		char tnd = pattern[2*i+1];
		int num = 10*((int)fst-'0') + ((int)tnd-'0');
		vec.push_back(num);
	}

	ll ans = 0;

	ans = max(h1(vec) , max(h2(vec) , max(h3(vec) , h4(vec))));
	cout << ans;

	return 0;
}