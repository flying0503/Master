//
// Created by deng on 19-1-28.
//

#include <iostream>

using namespace std;

int jiechen(int n)
{
    int G = 1;
    for (int i = 1; i <= n; ++i) {
        G = G*i;
    }
    return G;
}

int main()
{
    int n;
    cout << "请输入n的值：";
    cin >> n;
    if(n <=0 )
    {
        cout << "n必须大于等于1" << endl;
        return -1;
    }
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        int g = jiechen(i);
        cout << i << "!=" << g <<endl;
        sum += g;
    }
    cout << "1-" << n << "的阶乘的和为：" << sum <<endl;
    return 0;
}