#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cerr << "Provide a value for maxN." << '\n';
        return 1;
    }

    int maxN = stoi(argv[1]);
    double* c = new double[maxN + 1];
    c[0] = 0;

    for (int N = 1; N <= maxN; ++N) {
        c[N] = (N + 1) * c[N - 1] / N + 2;
    }

    for (int N = 10; N <= maxN; N *= 10) {
        double approx = 2 * N * log(N) - 2 * N;
        cout<<setw(10) << N
            <<setw(15) << fixed << setprecision(2) << c[N]
            <<setw(15) << fixed << setprecision(2) << approx
            <<'\n';
    }

    delete[] c;
    return 0;
}


