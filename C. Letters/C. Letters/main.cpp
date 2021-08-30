#include<bits/stdc++.h>
using namespace std;
#define sf(n) scanf("%d",&n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define pf printf(%d\n",n)
#define pff printf(%d%s\n",n)
#define maxn 2000005
#define N 10010
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
typedef long long ll ;
typedef unsigned long long ull ;

ll a[maxn];
ll b[maxn];
ll pre[maxn];


 ll binarySearch(ll a[],ll n,ll key)
 {
     ll left = 1,right = n-1;
     while (left <= right)
     {
         ll mid = (left + right) / 2;
         if (a[mid] >= key)
             right = mid - 1;
         else if (a[mid] < key)
             left = mid + 1;
     }
     return left;
 }



int main(){
    //fast;
    ll n,m,x;
   cin>>n>>m;
    int i=0;
   for(i=1;i<=n;i++){
        cin>>a[i];
        pre[i]= pre[i-1]+a[i];
        }
  for(i=1;i<=m;i++){
        cin>>x;
       ll pos = binarySearch(pre,n,x);
        cout<<pos<<" "<<x-pre[pos-1]<<endl;
  }


 return 0;  }





