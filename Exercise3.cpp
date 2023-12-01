//The idea is to identify distance from each point to the coordinate origin
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, k, x;
    cin >> n >> k;
    float coor[n*2];
    float dist[n];

    for (int i=0; i<n*2; i++){
        cin >> x ;
        coor[i]=x;
    }
//Identify the distances
    for (int j=0; j<n; j++){
        int i=2*j;
        dist[j]=sqrt(coor[i]*coor[i]+coor[i+1]*coor[i+1]);
    }
//Arange the distances and coordinates as well
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (dist[j] > dist[j + 1]) {
                swap(dist[j], dist[j + 1]);
                swap(coor[2 * j], coor[2 * j + 2]);
                swap(coor[2 * j + 1], coor[2 * j + 3]);
            }
        }
    }
    for (int i=0; i<k+1; i++){
        cout << coor[i] << " " << coor[i+1] << endl;
    }

    return 0;
}