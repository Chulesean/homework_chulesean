//The idea is to identify the bigest envelope
#include <iostream>
using namespace std;

int main(){
    int N, x;
    int count_max=0;
    int env[100];
    int area[100];
    cin >> N;

    for (int i=0; i<2*N; i++){
        cin >> x;
        env[i]=x;
    }
    for (int i=0; i<N; i++){
        int j=2*i;
        area[i]=env[j]*env[j+1];
    }
//Arange the area and the width-length as well
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N-1; j++) {
            if (area[j] < area[j + 1]) {
                swap(area[j], area[j + 1]);
                swap(env[2 * j], env[2 * j + 2]);
                swap(env[2 * j + 1], env[2 * j + 3]);
            }
        }
    }
//Check if the outsider envelope is able to contain the next ones
    for (int i=0; i<2*N-1; i+=2){
        int count =1;
        for (int j=i+2; j<2*N-1; j+=2){
            if(env[i]>env[j] && env[i+1]>env[j+1]){
                count+=1;
            }
        }
        count_max=max(count,count_max);
    }
    cout << count_max;
    
    return 0;
}