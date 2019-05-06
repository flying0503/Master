//
// Created by deng on 19-1-10.
//
#include <iostream>
#include <malloc.h>
#include <assert.h>

using namespace std;

typedef int DataType;

typedef struct SListNode
{
    int data;
    SListNode *next;
}SListNode;

SListNode *_BuyNode(DataType x)             //建立节点
{
    SListNode *tmp = (SListNode *)malloc(sizeof(SListNode));
    tmp->data = x;
    tmp->next = NULL;

    return tmp;
}

int GetListSize(SListNode *pHead)       //获取链表长度
{
    assert(pHead);
    SListNode *list = pHead;
    int count = 0;
    while (list)
    {
        count++;
        list = list->next;
    }
    return count;
}

void DeleteAllList(SListNode *&pHead)       //清空链表
{
    SListNode *list = pHead;
    while (list)
    {
        SListNode *tmp = list;
        list = list->next;
        cout<<"delete:"<<tmp->data<<endl;
        free(tmp);
    }
    pHead = NULL;
}

void PrintSList(SListNode *pHead)           //打印单链表
{
    SListNode *list = pHead;
    while (list)
    {
        cout<<list->data<<"->";
        list = list->next;
    }
    cout<<"NULL\n";
}

void PushFront(SListNode *&pHead,DataType x)    //头插
{
    if(pHead == NULL)
    {
        pHead = _BuyNode(x);
    } else{
        SListNode *tmp = _BuyNode(x);   //新建节点
        tmp->next = pHead;
        pHead = tmp;
    }
}

void PushBack(SListNode *&pHead,DataType x) //尾插
{
    if (pHead == NULL)
    {
        pHead = _BuyNode(x);
    }else{
        SListNode *last = pHead;
        while (last->next != NULL)
        {
            last = last->next;
        }
        last->next = _BuyNode(x);
    }
}

SListNode *Find(SListNode *pHead,DataType x)    //查找
{
    SListNode *cur = pHead;

    while (cur)
    {
        if(cur->data == x)
        {
            return cur;
        }
        cur=cur->next;
    }
    return NULL;
}

void Insert(SListNode *pos,DataType x)  //在某位置插入
{
    assert(pos);

    SListNode *tmp = _BuyNode(x);
    tmp->next = pos->next;
    pos->next = tmp;
}

void Erase(SListNode *&pHead,SListNode *pos)    //从某节点删除
{
    assert(pHead);
    assert(pos);

    if(pHead = pos)
    {
        pHead = pHead->next;
        free(pos);
        return;
    }

    SListNode *prev = pHead;
    while (prev == NULL)
    {
        if (prev->next == pos)
        {
            prev->next = pos->next;
            free(pos);
            break;
        }
        prev = prev->next;
    }
}

void DelNonTailNode(SListNode *pos)     //删除其中某一节点
{
    assert(pos);
    assert(pos->next);

    SListNode *del = pos->next;         //双指针法
    SListNode *dnext = del->next;       //双指针法
    pos->data = del->data;
    pos->next = dnext;      //钩连下一个
    free(del);
}

void Sort(SListNode *pHead) //冒泡排序
{
    assert(pHead);

}

int main()
{
    cout<<"头插法:\n\a";
    SListNode *PFlist = NULL;
    PushFront(PFlist,1);
    PushFront(PFlist,2);
    PushFront(PFlist,3);
    PushFront(PFlist,4);
    PrintSList(PFlist);
    cout<<"链表长度："<<GetListSize(PFlist)<<endl;

    cout<<"查找值为x的节点，请输入x\n";
    int x;
    cin>>x;
    cout<<"查找位置是："<<Find(PFlist,x)<<endl;

    Insert(Find(PFlist,x),8);

    cout<<"插入一个节点后的链表：";
    PrintSList(PFlist);

    DelNonTailNode(Find(PFlist,x));
    cout<<"删除一个中间节点：";
    PrintSList(PFlist);

    DeleteAllList(PFlist);

    cout<<"尾插法:\n\a";
    SListNode *PBlist = NULL;
    PushBack(PBlist,1);
    PushBack(PBlist,2);
    PushBack(PBlist,3);
    PushBack(PBlist,4);
    PrintSList(PBlist);
    cout<<"链表长度："<<GetListSize(PBlist)<<endl;

    cout<<"查找值为x的节点，请输入x\n";
    //int x;
    cin>>x;
    cout<<"查找位置是："<<Find(PBlist,x)<<endl;

    Erase(PBlist,Find(PBlist,x));
    cout<<"删除节点后：";
    PrintSList(PBlist);

    DeleteAllList(PBlist);

    return 0;
}
