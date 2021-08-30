#include<bits/stdc++.h>
using namespace std;
int m[10];
int main(){
int n;
cin>>n;
cout<<"Lumberjacks:"<<endl;
while(n--){
        int k=0;


    for(int i=0;i<10;++i){
        cin>>m[i];
        }
        for(int i=0;i<9;++i){
        if(m[i]>m[i+1]){
            k++;
        }
        else if(m[i]<m[i+1]){
            k--;
        }}
        if(abs(k)==9)
            cout<<"Ordered"<<endl;
        else
            cout<<"Unordered"<<endl;


}
return 0;
}
