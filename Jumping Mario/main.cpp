#include<bits/stdc++.h>
using namespace std;
const int m=50;
int main(){
int k,n;
cin>>k;
for(int i=0;i<k;++i){
    cin>>n;
    int high=0;
    int low=0;

        int ar[m];
        for(int j=0;j<n;j++){
            cin>>ar[j];}

            if(n==1){
        cout<<"Case "<<i+1<<": "<<"0 0"<<endl;
    }
    else{

        for(int j=1, k=0;j<n;k++,j++){
            if(ar[k]-ar[j]<0){
                ++high;
            }
          else  if(ar[k]-ar[j]>0){
                ++low;
            }

        }
    cout<<"Case "<<i+1<<": "<<high<<" "<<low<<endl;

    }}

return 0;
}
