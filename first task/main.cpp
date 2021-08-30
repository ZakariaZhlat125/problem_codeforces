#include<bits/stdc++.h>
using namespace std;
class BigInterger {
  private:
     unsigned int m;
  public:
      BigInterger(int a):m(a){}




};
BigInterger factorial(int n){
    //initialize result
    BigInterger f= new BigInterger("1");//or BigInterger .one
    //Multiply f with 2,3,....N
    for(int i=2;i<=n;++i)
        f *= i;
    return f;
}
int main(){
int n=20;
cout<<factorial(n)<<endl;

return 0;}
