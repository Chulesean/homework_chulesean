//The idea is to is identify not overlap rectangle
#include <iostream>
using namespace std;

int main() {
    int x1,y1,x2,y2,X1,Y1,X2,Y2;
    cin >> x1 >> y1 >> x2 >> y2 >> X1 >> Y1 >> X2 >> Y2;

if ((X2<=x1) || (x2<=X1) || (Y2<=y1) || (y2<=Y1)){
    cout << "False";
}   
    else cout << "True";

}