#include <bits/stdc++.h>
#define endl '\n'
using namespace  std;
int f(){
    static int x = 0;
    return x++;
}

template<class T>
class fraction{
    static int cnt;
    T num , den;
    void reduce(){
         T gcd = abs(__gcd(num,den));
        if(den<0)
            gcd*= -1 ;
        num /=gcd;
        den /=gcd;
    }
public:
    fraction(T a = 0, T b = 1){
        num = a ; den = b;
        reduce();
        cnt++;
    }


    string to_string() const{
        stringstream ss;
        ss<<num<<'/'<<den;
        return ss.str();

    }
    fraction operator+(const fraction& rhs) const{
        return fraction(num*rhs.den + den*rhs.num , den*rhs.den);
    }
    fraction operator-(const fraction& rhs) const{
        return (*this) + fraction(-1*rhs.num,rhs.den);
    }
    fraction operator*(const fraction& rhs) const{
        return fraction(num*rhs.num,den*rhs.den);
    }
    fraction operator/(const fraction& rhs) const{
        return (*this) * fraction(rhs.den,rhs.num);
    }
    fraction& operator+=(const fraction& rhs) {
        num = num*rhs.den + den*rhs.num;
        den*=rhs.den;
        reduce();
        return *this;
    }
    fraction& operator-=(const fraction& rhs) {
        return (*this)+=  rhs*-1;

    }
    fraction& operator*=(const fraction& rhs) {
        num*= rhs.num;
        den*=rhs.den;
        reduce();
        return *this;
    }
    fraction& operator/=(const fraction& rhs) {
     return (*this)*= (fraction)1 / rhs;
    }
    bool operator==(const fraction& rhs) const{
        return !((*this)<rhs) && !((*this)>rhs);
    }
    bool operator<(const fraction& rhs) const{
        return 1ll*num*rhs.den < 1ll*rhs.num*den;
    }
    bool operator>(const fraction& rhs) const{
        return rhs<(*this);
    }
    bool operator<=(const fraction& rhs) const{
        return (*this) < rhs || (*this) == rhs;
    }
    bool operator>=(const fraction& rhs) const{
        return rhs<=(*this);
    }
    static int getCnt(){
        return cnt;
    }
    ~fraction(){
        cnt--;
    }
};
template <class T>
int fraction<T>::cnt = 0;
int main()
{

    fraction<int> f1 (2,5);
    fraction<int> f = 5;
    cout<<f.to_string()<<endl;
    cout<<f.getCnt()<<endl;

    return 0;
}
