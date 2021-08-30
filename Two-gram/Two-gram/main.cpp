#include<bits/stdc++.h>
using namespace std;
string str;
int call(string sub ){
    int cnt=0;
    for(int i=0;i<str.size();++i){
        if(str[i]==sub[0]&&str[i+1]==sub[1])
            cnt++;

    }
    return cnt;}

    int main(){
    int maxi=0,n;
    string gram;
    cin>>n;
    cin>>str;
    for(int i=0;i<str.size();++i){
        string sub =str.substr(i,2);
        cerr<<sub<<endl;
        int temp =call(sub);
       // cerr<<temp;
        if(temp>maxi){
            maxi= temp;
            gram= sub;

    }
    }
    cout<<gram<<endl;

    return 0;
}
