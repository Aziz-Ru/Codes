#include <bits/stdc++.h>
using namespace std;
#define TC int t; cin>>t;while(t--)
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define nl '\n'
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define ff first 
#define ss second 
#define debug(x) cout<<#x<<" "<<x<<nl;
const ll sz=2e5+7,Inf=1e9+7;
void solve()
{
	ll n; cin>>n;
	vector<ll>v(n);
	
	for(int i=0;i<n;i++) {
		cin>>v[i];
       // cout<<v[i]<<" ";

	}
	if(is_sorted(all(v))) {
			cout<<0<<nl;
			return;
		}
	if(v[n-1]<v[n-2]||(v[n-2]-v[n-1])>v[n-2]){
		cout<<"-1"<<nl;
		return;
	}
	else{
	cout<<n-2<<nl;
	for(int i=0;i<n-2;i++)
		cout<<i+1<<" "<<n-1<<" "<<n<<nl;
    }
    
    #ifndef ONLINE_JUDGE
 cout<< "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    #endif
}
int main() {
  fast;
 
  TC
  solve();
  return 0;
}