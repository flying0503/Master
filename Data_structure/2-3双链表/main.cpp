//
// Created by deng on 19-5-6.
//
#include "DLinkNode.h"

int main()
{
    DLinkNode *L = NULL;
    //memset(L,0, sizeof(DLinkNode));
    ElemType a[]={8,43,4,35,3,74,9,777,11};
    int n = sizeof(a) / sizeof(ElemType);

    CreateListR(L,a,n);
    return 0;
}
