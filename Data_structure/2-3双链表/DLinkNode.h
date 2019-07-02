//
// Created by deng on 19-5-6.
//

#ifndef MASTER_DLINKNODE_H
#define MASTER_DLINKNODE_H

#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

typedef int ElemType;

typedef struct DLinkNode
{
    ElemType data;          //数据
    DLinkNode *prior;    //前驱节点
    DLinkNode *next;     //后继节点
}DLinkNode;

//新建节点
DLinkNode *NewNode(ElemType x)             //建立节点
{
    SListNode *tmp = (SListNode *)malloc(sizeof(SListNode));
    tmp->data = x;
    tmp->next = NULL;

    return tmp;
}

//建立双链表,头插法
void CreateListF(DLinkNode *&L,ElemType a)
{
    if (L->prior == NULL)
    {
        L = _BuyNode(x);
    }else{
        SListNode *last = pHead;
        while (last->next != NULL)
        {
            last = last->next;
        }
        last->next = _BuyNode(x);
    }
}

//建立双链表，尾插法
void CreateListR(DLinkNode *&L,ElemType a)
{

}

//输出双链表
void PrintDList(DLinkNode *&L)
{
    int n = sizeof(L) / sizeof(DLinkNode);
    printf("n = %d\n",n);
    for (int i = 0; i < n; ++i) {
        printf("DLinkNode[%d] = %d\n",i,L->data);
    }
}


#endif //MASTER_DLINKNODE_H
