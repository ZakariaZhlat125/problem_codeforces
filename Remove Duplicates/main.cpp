#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int a[],int n){
    int i,j,key;
    for(i=1;i<n;++i){
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j=j-1;

            a[j+1]=key;}
}}
int main(){
int arr[]={4,3,2,10,12,1,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    insertion_sort(arr,n);
    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }


return 0;}
