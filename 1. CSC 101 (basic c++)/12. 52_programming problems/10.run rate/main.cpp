#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    float T, i, r1, r2;
    double B, over, c_r, e_r;
    cin>>T;
    for(i = 1; i <= T; i = i + 1){
        cin>>r1>>r2>>B;
        over = ((300-B)/6);
        c_r = r2/over;
        e_r = ((r1-r2)+1)/(B/6);
        cout<<setprecision(3)<<c_r<<" "<<setprecision(3)<<e_r<<endl;



    }
    return 0;
}
