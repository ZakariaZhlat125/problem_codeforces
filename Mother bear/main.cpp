#include <iostream>
using namespace std;

int main() {
int n,m;
cin>>n;
int arr[100];
while(n--){
    cin>>m;
    int count=0;
    for(int i=0;i<m;i++){
        cin>>arr[i];
        count+=arr[i];
    }
    cout<<count<<endl;
}
return 0;
}
