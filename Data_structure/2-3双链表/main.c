//
// Created by deng on 19-5-6.
//
#include "DLinkNode.h"

int main()
{
    DLinkNode L;
    ElemType a[]={98,23,4,1,3,65,33,67,88};
    int n = sizeof(a) / sizeof(ElemType);
    CreateListF(&L,a,n);
    return 0;
}
