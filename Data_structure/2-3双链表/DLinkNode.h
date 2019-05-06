//
// Created by deng on 19-5-6.
//

#ifndef MASTER_DLINKNODE_H
#define MASTER_DLINKNODE_H

#include <stdio.h>
#include <stdlib.h>

typedef int ElemType;

typedef struct DNode
{
    ElemType data;          //数据
    struct DNode *prior;    //前驱节点
    struct DNode *next;     //后继节点
}DLinkNode;

//建立双链表,头插法
void CreateListF(DLinkNode *L,ElemType a[],int n)
{
    DLinkNode *s;
    L = (DLinkNode *)malloc(sizeof(DLinkNode));         //创建头节点
    L->prior = L->next = NULL;                          //前后节点置为NULL
    for (int i = 0; i <n ; ++i)                         //循环建立数据节点
    {
        s = (DLinkNode *)malloc(sizeof(DLinkNode));
        s->data = a[i];                                 //创建数据节点s
        s->next = L->next;                              //将s节点插入到头节点之后
        if(L->next!=NULL)                               //若L存在数据节点，修改L的next的前驱指针
            L->next->prior = s;
        L->next = s;
        s->prior = L;
    }
}

//建立双链表，尾插法
void CreateListR(DLinkNode *L,ElemType a[],int n)
{
    DLinkNode *s,*r;
    L = (DLinkNode *)malloc(sizeof(DLinkNode));     //创建头节点
    r = L;                                          //r始终指向尾节点，开始时指向头节点
    for (int i = 0; i < n; ++i) {
        s = (DLinkNode *)malloc(sizeof(DLinkNode));
        s->data = a[i];                             //创建数据节点s
        r->next = s;s->prior = r;                   //将s节点插入到r节点之后，前驱后继钩连
        r = s;                                      //r指向尾节点
    }
    r->next = NULL;                                 //尾节点next置为NULL
}

#endif //MASTER_DLINKNODE_H
