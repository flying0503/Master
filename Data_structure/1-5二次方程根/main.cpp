//
// Created by deng on 19-1-11.
//
#include <iostream>
#include <cmath>
using namespace std;

int solution(double a, double b, double c, double &X1, double &X2)
{
    double d = b*b-4*a*c;

    if(d>0)
    {
        X1 = (-b+sqrt(d))/(2*a);
        X2 = (-b-sqrt(d))/(2*a);
        return 2;
    }

    if(d==0)
    {
        X1 = (-b)/(2*a);
        X2 = X1;
        return 1;
    }

    if(d<0)
    {
        return 0;
    }
}

int main()
{
    double a,b,c;
    cout << "请输入方程系数:" << endl;
    cout << "a=";cin >> a;
    cout << "b=";cin >> b;
    cout << "c=";cin >> c;

    double X1,X2;
    int roots = solution(a,b,c,X1,X2);

    cout << "共有" << roots << "个实根" << endl;

    switch (roots)
    {
        case 0:
            cout << "没有实根"<<endl;
            break;

        case 1:
            cout << "X1=X2=" << X1 << endl;
            break;

        case 2:
            cout << "X1=" << X1 << endl << "X2=" << X2 << endl ;
            break;

        default:
            break;
    }

    return 0;
}
