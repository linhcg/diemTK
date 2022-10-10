#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float gk, ck, tk; // giua ky, cuoi ky, tong ket
    cout << "gk = ";
    cin >> gk;
    cout << "ck = ";
    cin >> ck;
    tk = gk * 0.4 + ck * 0.6;
    cout << fixed << setprecision(2) << "tk = " << tk;
    return 0;
}