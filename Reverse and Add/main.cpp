#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll reverse1( ll n){
 ll rev_num=0;
 while(n>0){
    rev_num =rev_num *10 + n%10;
    n=n/10;
 }
 return rev_num;
}
void sum1(ll n){
    int count1=0;
    while(n!=reverse1(n)){
        n=n+reverse1(n);
        count1++;
    }
    cout<<count1<<" "<<n<<endl;
}


int main(){
ll n,number;
cin>>n;
while(n--){
cin>>number;
sum1(number);}

return 0;}
