#include<bits/stdc++.h>
using namespace std;
int n;
int grid[20][20];
int Case=1;
int  main(){
while(cin>>n){
    if(n==0)
        break;
      cout << "Case " << Case++ << ":";
    for(int i=0;i<n;++i)
        for(int j=0;j<n;++j)
            cin>>grid[i][j];
    for(int rows =0; rows<n/2;++rows){
                int res=0;

        for(int cols= rows ;cols<n-1-rows;++cols){

            res+=grid[rows][cols] +grid[cols][n-1-rows]+grid[n-1-rows][n-1-cols]+grid[n-1-cols][rows];
                }
            cout << " " << res;
        }

        if (n % 2 == 1)

            cout << " " << grid[n / 2][n / 2];
        cout << endl;
    }
    return 0;
}
