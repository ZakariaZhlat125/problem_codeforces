#include<bits/stdc++.h>
using namespace std;
int main(){
int x1,y1,x2,y2;
while(cin>>x1>>y1>>x2>>y2){
    if(x1==0 && x2==0 && y1==0 && y2==0)
        break;
        int delx =abs(x1-x2);
        int dely =abs (y1-y2);
        if(delx + dely==0)
            printf("0\n");
        else if(delx==dely || delx ==0 ||dely ==0)
            printf("1\n");
        else
            printf("2\n");
}

return 0;
}
