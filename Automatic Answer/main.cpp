#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,number;
    int digit=0;
    cin>>n;
    while(n--){
        cin>>number;
        digit=(((((number*567)/9)+7492)*235)/47)-498;
        digit=digit%100;
        digit=digit/10;
        cout<<abs(digit)<<endl;

    }

return 0;}
