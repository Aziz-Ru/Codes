#include <bits/stdc++.h>
using namespace std;
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long int
#define nl '\n'
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define ff first 
#define ss second 
#define bits(x) __builtin_popcount(x)
#define bit_trail_zero(x) __builtin_ctz(x)
const int siz=2e5+7,Inf=1e9+7;
double PI=3.14159265358979323846;

vector<pair<int,int>> direction{{1,0},{0,1},{-1,0},{0,-1}};


int MX=1e6;
string s="";
int n= 150000;
vector<bool> nums(MX+6,false);
void seive(){
   nums[0]=nums[1]=false;
    for(int i=2;i*i<MX;i++){
      if(nums[i]==false){
        for(int j=i*i;j<MX;j+=i)
          nums[j]=true;
      }
    }
    for(int i=2;i<MX;i++){
        if(nums[i]==false){
            int p=i;
            string q="";
            while(p){
              if(p&1)q+='1';
              else q+='0';
              p/=2;
            }
            reverse(all(q));

            s+=q;
            if(s.size()>n){
              cout<<i<<' ';
              break;
            }
        }
    }
}

void solve(){
 
  string q="";
  cout<<s.max_size();
}

int32_t main() {
  Fast;
  seive();
 // int t; cin>>t;

    solve();
  
  return 0;
}