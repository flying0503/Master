//
// Created by deng on 19-1-23.
//
#include <iostream>

using namespace std;

int Sum_one_by_one(int n)
{
    int Sum = 0;
    for (int i = 0; i <= n ; ++i) {
        Sum = Sum + i;
    }
    return Sum;
}

int Sum_gauss(int n)
{
    int Sum = 0;
    Sum = (n*(n+1)/2);
    return Sum;
}
int main()
{
    int n = 0;
    cout << "请输入n的值：";
    cin >> n;
    int result_one_by_one = Sum_one_by_one(n);
    int result_gauss = Sum_gauss(n);
    cout << "逐个累加n的Sum值为：" << result_one_by_one << endl;
    cout << "高斯算法n的Sum值为：" << result_gauss << endl;
    return 0;
}
