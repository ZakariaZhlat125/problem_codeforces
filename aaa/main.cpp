#include<bits/stdc++.h>
using namespace std;
typedef int64_t ll;
typedef long long ll;
#define el printf("\n")
#define pb push_back
const int base =1e9;
class bigint{
   bool neg =false;
   public:
   string number ="0";

   //constracotr
   bigint(){}
    bigint(const bigint& other){
        this -> number = other.number;
    }

   bigint(int m){

    stringstream ss;
    ss >>m;
   }
   bigint to_bigint(int m){
   stringstream ss;
   ss>>m;
   return m;}
       bigint operator + (bigint const& c1,bigint const &c2){
       return bigint(c1.number+c2.number)}

    friend ostream &operator <<(ostream & out,const bigint &c );
    friend istream &operator >>(istream &in,const bigint &c);
};
ostream &operator <<(ostream &out,const bigint &c){
    out<<c.number;
    return out;
    }
istream & operator >>(istream &in,bigint&c){
in>>c.number;
return in;
}
bigint factorial (int n){
bigint f=n;
f *=1;
return f;
}
int main(){
//bigint f(20);
int n=20;
cout<<factorial(n);
return 0;}
