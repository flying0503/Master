//
// Created by deng on 19-1-27.
//
#include <iostream>

using namespace std;

int prime_number(int n)
{
    int prime_number = 0;
    int temp = 0;
    for (int i = 2; i < n; i++) {
        temp = 0;
        for (int j = 2; j < i; j++) {
            if(i%j == 0)
            {
                temp++;
            }
        }
        if(temp==0)
        {
            cout << "prime_number=" << i << endl;
            prime_number++;
        }
    }
    return prime_number;
}

int main()
{
    int n;
    cout << "请输入n的值：";
    cin >> n;
    int m = prime_number(n);
    cout << "1-" << n << "的素数个数是：" << m <<"个。"<<endl;
    return 0;
}
