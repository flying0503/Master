//
// Created by deng on 19-1-10.
//
#include <iostream>
#include <string.h>
using namespace std;

struct Teacher
{
    int no;
    char name[8];
    int age;
};

int main()
{
    struct Teacher t;
    t.no=19;
    t.age=25;
    strcpy(t.name,"邓宸");

    cout<<"工号："<< t.no << " 姓名：" << t.name << " 年龄：" << t.age <<endl;

    return 0;
}
