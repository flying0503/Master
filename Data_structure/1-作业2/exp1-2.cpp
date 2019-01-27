//
// Created by deng on 19-1-23.
//
#include <iostream>
#include <cmath>

using namespace std;

double log2_n(int n)
{
    double log_n = log(n);
    double log_2 = log(2);
    return log_n/log_2;
}

double sqrt_n(int n)
{
    return sqrt(n);
}

int N(int n)
{
    return n;
}

double nlog2_n(int n)
{
    double log_n = log(n);
    double log_2 = log(2);
    return n*(log_n/log_2);
}

int n_2(int n)
{
    return n*n;
}

int n_3(int n)
{
    return n*n*n;
}

int _2_n(int n)
{
    return pow(2,n);
}

int n_N(int n)
{
    int G = 1;
    for (int i = 1; i <= n; i++) {
        G = G*i;
    }
    return G;
}

int main()
{
    int n = 1;
    cout << "请输入n的值：";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << endl << "当n=" << i << endl;
        cout << "log2(n)=" << log2_n(i) << endl;
        cout << "sqrt(n)=" << sqrt_n(i) << endl;
        cout << "n=" << N(i) << endl;
        cout << "nlog2(n)=" << nlog2_n(i) << endl;
        cout << "n^2=" << n_2(i) << endl;
        cout << "n^3=" << n_3(i) << endl;
        cout << "2^n=" << _2_n(i) << endl;
        cout << "n_N=" << n_N(i) << endl;
    }
    return 0;
}
