//
// Created by deng on 19-7-2.
//

#ifndef MASTER_TREE_H
#define MASTER_TREE_H

#include <stdio.h>
typedef char* ElemType;

typedef struct BTree{
    struct BTree *Lchild;
    struct BTree *Rchild;

    ElemType data;
}BTNode;

void init(BTNode *& b,ElemType str)
{

}

void DestroyBTree(BTNode *& b)
{

}

BTNode *FindNode(BTNode *b,ElemType x)
{

}

BTNode *LchildNode(BTNode *p)
{

}

int BTHeight(BTNode *b)
{

}

void DispBTree(BTNode *b)
{

}

void PreOrder(BTNode *b)
{

}

void InOrder(BTNode *b)
{

}

void PostOrder(BTNode *b)
{

}

#endif //MASTER_TREE_H
