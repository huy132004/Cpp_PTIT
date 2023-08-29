#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        double x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        double distance;
        distance = sqrt(pow((x2-x1),2) + pow((y2-y1),2));
        printf("%.4f\n",distance);
    }
}