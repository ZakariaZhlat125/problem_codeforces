#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
long long int arr1[110];
long long int arr2[110];
int i,j;

int findmax(long long int arr[],int low,int high){
   long long int max1 =arr[0];

    for(i=1;i<=high;i++){
        if(arr[i]>=max1){
            max1=arr[i];
            }
      //  else
            //break;

        }
        long long int min1 =arr[0];

    for(i=1;i<=high;i++){
        if(arr[i]<=min1){
            min1=arr[i];
            }
      //  else
            //break;

        }
        for(i=low+1;i<=high;i++){
                if(arr[i] <0)
                return min1;
                else

                    return max1;}
}

int deleteelement(long long int arr[],int n,long long int x){
    for(i=0;i<n;++i){
        if(arr[i]==x)

            break;}
   if(i<n){
        n=n-1;
        for(int j=i;j<=n;j++){
            arr[j]=arr[j+1];
            break;}
    }
    return n;
}

int main(){
   long long int n,m;
    cin>>n>>m;
    for(i=0;i<n;++i)
        cin>>arr1[i];
    for(i=0;i<m;++i)
        cin>>arr2[i];

   long long int x=findmax(arr1,0,n-1);
    deleteelement(arr1,n,x);
   //arr1[count1]=NULL;
    long long t=findmax(arr1,0,n-1);
    long long  l=findmax(arr2,0,m-1);
    cout<<(t*l)<<endl;


return 0;}
