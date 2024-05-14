    
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace std;
using namespace __gnu_pbds; 

#ifndef ONLINE_JUDGE
#define debug(x) cerr<<#x<<' ';_print(x);cerr<<'\n';
#else
#define debug(x)
#endif

#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define ff first 
#define ss second 
#define set_bits(x) __builtin_popcount(x)
#define bit_trail_zero(x) __builtin_ctz(x)
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
#define ordered_multiset tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update>

void _print(long long t) {cerr<< t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(double t) {cerr << t;}


template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);

template <class T, class V> void _print(pair <T, V> p) {cerr<<"["; _print(p.ff); cerr<< ","; _print(p.ss);cerr<<"]";}
template <class T> void _print(vector <T> v) {cerr<<"[";for (T i : v) {_print(i); cerr<< ",";}cerr<< "]";}
template <class T> void _print(set <T> v) {cerr<<"[";for (T i : v) {_print(i);cerr<<','; }cerr<< "]";}
template <class T> void _print(multiset <T> v) {cerr<< "[";for (T i : v) {_print(i);cerr<< " ";}cerr<<"]";}
template <class T, class V> void _print(map <T, V> v) { cerr<< "[";for (auto i : v) {_print(i); cerr<< " ";}cerr<< "]"; }


const int siz=2e5+7,Inf=1e9+7;
double PI=3.14159265358979323846;

/*sort(all(v),[](int a,int b){
   return a>b;
});*/

vector<long long> int_to_bin(long long n){
    vector<long long>v;
    while(n){
        if(n&1)v.push_back(1); 
        else v.push_back(0); 
        n/=2;
    }
    // reverse(all(v)); 
    return v;
}


vector<pair<int,int>> direction{{1,0},{0,1},{-1,0},{0,-1}};

void silicon(){
    
    long long n,l,r; cin>>n>>l>>r; 

    vector<long long>v=int_to_bin(n);
    long long a=1;
    long long ans=0;
    for(int i=0;i<v.size();i++){
         if(v[i]&&a>=l){
            // cout<<a<<' ';
            long long b=a*2;
            b=min(b,r);
            long long r=(b-a);
            ans+=r;
         }
         a*=2;
    }
    // if(l==1) ans+=1;
    cout<<ans<<endl;

  
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("Error.txt","w",stderr);
#endif
     Fast;
     silicon();
  
  return 0;
}