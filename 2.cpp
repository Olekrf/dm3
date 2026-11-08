#include <iostream>
#include <cmath>

using namespace std;

long long factorial(int n) {
    long long result = 1;
    for (int i = 2; i <= n; ++i)
        result *= i;
    return result;
}

int main() {
    int px = 12, py = 2, pz = 4, pt=8;
    int ax=3, ay=-2, az=3, at=-1;
    int nx= 3, ny = 2, nz = 2, nt=4;
    int n =9;
    int k1 = px / nx;
    int k2 = py / ny;
    int k3 = pz / nz;
    int k4 = pt / nt;

    long long C =(factorial(n)/(factorial(k1)*factorial(k2)*factorial(k3)*factorial(k4)))*pow(ax, k1)*pow(ay, k2)*pow(az, k3)*pow(at, k4);
    cout<<"C = "<<C<<endl;
    return 0;
}