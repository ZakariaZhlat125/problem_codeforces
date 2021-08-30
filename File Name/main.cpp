#include<bits/stdc++.h>
using namespace std ;
int n,i,cnt;
char str[101];

int main(){

cin>>n;
for(i=0;i<n;++i)
    cin>>str[i];

for(i=0;i<n;++i){
    if(i+2<=n-1){
        if(str[i]=='x' && str[i+1]=='x'&& str[i+2]=='x'){
            cnt++;
        }
    }}
    cout<<cnt<<endl;

return 0;}
