//
// Created by deng on 19-1-10.
//
#include <iostream>
using namespace std;

struct
{
    int no;             //存储学号
    char name[8];       //存储姓名
    char sex[2];        //存储性别
    char _class[5];     //存储班级
}student[7]={{1,"张斌","男","9901"},{8,"刘丽","女","9902"},
             {34,"李英","女","9901"},{20,"陈华","男","9902"},
             {12,"王奇","男","9901"},{26,"董强","男","9902"},
             {5,"王萍","女","9901"}};

void show()
{
    for (int i = 0; i <7 ; ++i) {
        cout<< "学号：" << student[i].no << " 姓名：" << student[i].name
            << " 性别：" << student[i].sex << " 班级："<< student[i]._class
            << endl << endl;
    }
}

int main()
{
    show();
    return 0;
}
