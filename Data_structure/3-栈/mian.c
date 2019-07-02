//
// Created by deng on 19-5-5.
//

#include "stack.h"

int main()
{
    SqStack S;
    printf("Init = %d\n",Init_Stack(&S));
    printf("push = %d\n",push(S,8));
}