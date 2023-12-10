        
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace std;
using namespace __gnu_pbds; 

#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long int
#define endl '\n'
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define ff first 
#define ss second 
#define bits(x) __builtin_popcount(x)
#define bit_trail_zero(x) __builtin_ctz(x)
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
#define ordered_multiset tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update>

const int siz=2e5+7,Inf=1e9+7;
double PI=3.14159265358979323846;

vector<pair<int,int>> direction{{1,0},{0,1},{-1,0},{0,-1}};

int maxSubArraySum(vector<int>nums_array)
{   int size=nums_array.size();
    int result = INT_MIN, current_sum = 0;

    for (int i = 0; i < size; i++) {
        current_sum += nums_array[i];
        result=max(result,current_sum);

        if (current_sum < 0)
            current_sum = 0;
    }
    return result;
}

void silicon(){
int n; cin>>n;
vector<int>v(n);
int ans=INT_MIN;

for(int i=0;i<n;i++){
        cin>>v[i];
}

vector<int>p;
for(int i=0;i<n;i++){
        if(i==0) p.push_back(v[i]); 
        else{
                int x=abs(p.back());
                int y=abs(v[i]);
                if((x&1 && y&1)||(x%2==0&&y%2==0)){
                        int mxsum=maxSubArraySum(p);
                        ans=max(ans,mxsum);
                        p.clear();
                }
                p.push_back(v[i]);
        }
}
int mxsum=maxSubArraySum(p);
ans=max(ans,mxsum);
cout<<ans<<endl;



  
}

int32_t main() {
     Fast;
     int t;cin>>t;
     while(t--)
     silicon();
  
  return 0;
}