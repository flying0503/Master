//
// Created by deng on 19-5-5.
//

#ifndef MASTER_STACK_H
#define MASTER_STACK_H

#define STACK_SIZE 100
#define STACK_INCREMENT 10
typedef int ElemType;

#include <stdio.h>
#include <stdlib.h>

typedef struct sqstack
{
    ElemType *bottom;    //栈底,栈不存在时为NULL
    ElemType *top;       //栈顶指针
    int stacksize;       //当前已分配空间,以元素为单位
}SqStack;

int Init_Stack(SqStack *S)
{
    S->bottom = (ElemType *)malloc(STACK_SIZE * sizeof(ElemType));
    if(!S->bottom) return -1;
    S->top = S->bottom;       //空栈时栈顶和栈底指针相同
    S->stacksize = STACK_SIZE;
    return 0;
}

int push(SqStack S,ElemType e)
{
    if (S.top-S.bottom>=S.stacksize-1)
    {
        S.bottom = (ElemType *) realloc(&S,(S.stacksize+STACK_SIZE));
        //栈满,追加存储空间
        if(!S.bottom) return -1;
        S.top = S.bottom+S.stacksize;
        S.stacksize += STACK_INCREMENT;
    }
    *S.top = e;
    S.top++;
    return 0;
}

#endif //MASTER_STACK_H
