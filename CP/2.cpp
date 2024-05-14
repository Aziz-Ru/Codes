#include <bits/stdc++.h>
using namespace std;


#ifndef ONLINE_JUDGE
#define debug(x) cerr<<#x<<' ';_print(x);cerr<<'\n';
#else
#define debug(x)
#endif
void _print(int t) {cerr<< t;}
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

int cnt=0;
int x,n;
int binpow(int base,int pow){
      int ans=1;
      while (pow)
      {
      if(pow&1) ans*=base;//ans=ans*base%m;
       base*=base;//base=base*base%m;
       pow/=2;
      }
    return ans;
  }
  void combination(int ind,vector<int>v,int sm){
    if(sm==x){
        cnt++;
        return;
    }
    if(ind==v.size()){
        return;
    }
    // cout<<sm<<' ';
    combination(ind+1,v,sm+v[ind]);
    combination(ind+1,v,sm);

  }
  

void solve(){
    
    cin>>x>>n;
    vector<int>v;
    for(int i=1;i<=31;i++){
        int k=binpow(i,n);
        if(k>x)break;
        else v.push_back(k);
    }
    cout<<v.size();
    // combination(0,v,0);
    // cout<<cnt<<'\n';
}


int main() {
    #ifndef ONLINE_JUDGE
    freopen("Error.txt","w",stderr);
   #endif
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  
    solve();
   
  return 0;
  
}