#include<bits/stdc++.h>
using namespace std;
#define sf(n) scanf("%d",&n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define pf printf(%d\n",n)
#define pff printf(%d%s\n",n)
#define maxn 2000005
#define N 1001

#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
typedef long long ll ;
typedef unsigned long long ull ;

ll a[N];
ll b[N];
set<int>se;

ll n,m,i;
int main(){
    fast;
    sff(n,m);
    for(i=0;i<n;++i){
        sf(a[i]);
        se.insert(a[i]);
        ++b[a[i]];
        //cerr<<b[i]<<endl;
    }
     int q=0;
     if(se.size()>=m){
        cout<<"YES"<<endl;
        for(int i=0;i<n && q<m;i++){
            if(b[a[i]]!=-1){
                cout<<i+1<<" ";
                b[a[i]]=-1;
                q++;
            }

        }
        cout<<endl;
     }
     else
        cout<<"NO"<<endl;

 return 0;
 }





