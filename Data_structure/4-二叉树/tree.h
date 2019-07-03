//
// Created by deng on 19-7-2.
//

#ifndef MASTER_TREE_H
#define MASTER_TREE_H

#include <stdlib.h>
#include <stdio.h>

#define MaxSize 100
typedef char ElemType;

typedef struct BTree{
    struct BTree *Lchild;
    struct BTree *Rchild;
    ElemType data;
}BTNode;

void init(BTNode *& b,char *str)
{
    BTNode *St[MaxSize],*p;
    int top = -1,k,j=0;
    char ch;
    b = NULL;
    ch = str[j];
    while (ch != '\0')
    {
        switch (ch)
        {
            case '(':
                top++;
                St[top]=p;
                k=1;
                break;
            case ')':
                top--;
                break;
            case ',':
                k=2;
                break;
            default:
                p=(BTNode *)malloc(sizeof(BTNode));
                p->data=ch;
                p->Lchild=p->Rchild=NULL;
                if(b==NULL)
                    b=p;
                else
                {
                    switch (k)
                    {
                        case 1:
                            St[top]->Lchild=p;
                            break;
                        case 2:
                            St[top]->Rchild=p;
                            break;
                    }
                }
        }
        j++;
        ch=str[j];
    }
}

void DestroyBTree(BTNode *& b)
{
    if(b!=NULL)
    {
        DestroyBTree(b->Rchild);
        DestroyBTree(b->Lchild);
        free(b);
    }
}

BTNode *FindNode(BTNode *b,ElemType x)
{
    BTNode *p;
    if(b == NULL)
        return NULL;
    else if(b->data == x)
        return b;
    else
    {
        p=FindNode(b->Lchild,x);
        if(p!=NULL)
            return p;
        else
            return FindNode(b->Rchild,x);
    }
}

BTNode *LchildNode(BTNode *p)
{
    return p->Lchild;
}

BTNode *RchildNode(BTNode *p)
{
    return p->Rchild;
}

int BTHeight(BTNode *b)
{
    int lchildh,rchildh;
    if(b == NULL)
        return 0;
    else
    {
        lchildh = BTHeight(b->Lchild);
        rchildh = BTHeight(b->Rchild);
        return (lchildh>rchildh)?(lchildh+1):(rchildh+1);
    }
}

void DispBTree(BTNode *b)
{
    if(b!=NULL)
    {
        printf("%c",b->data);
        if(b->Lchild!=NULL || b->Rchild!=NULL)
        {
            printf("(");
            DispBTree(b->Lchild);
            if(b->Rchild!=NULL)
                printf(",");
            DispBTree(b->Rchild);
            printf(")");
        }
    }
}

void PreOrder(BTNode *b)
{
    if(b != NULL)
    {
        printf("%c",b->data);
        PreOrder(b->Lchild);
        PreOrder(b->Rchild);
    }
}

void InOrder(BTNode *b)
{
    if(b != NULL)
    {
        InOrder(b->Lchild);
        printf("%c",b->data);
        InOrder(b->Rchild);
    }
}

void PostOrder(BTNode *b)
{
    if(b != NULL)
    {
        PostOrder(b->Lchild);
        PostOrder(b->Rchild);
        printf("%c",b->data);
    }
}

#endif //MASTER_TREE_H
