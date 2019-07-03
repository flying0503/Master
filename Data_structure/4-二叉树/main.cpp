//
// Created by deng on 19-7-2.
//

#include "tree.h"

int main()
{
    BTNode *b_tree = NULL;
    char *a = "1(2(4,5),3(6,7)";
    init(b_tree,a);
    DispBTree(b_tree);
    printf("\n");

    printf("先序遍历：\n");
    PreOrder(b_tree);
    printf("\n");

    printf("中序遍历：\n");
    InOrder(b_tree);
    printf("\n");

    printf("后序遍历：\n");
    PostOrder(b_tree);
    printf("\n");

    printf("二叉树高度：%d\n",BTHeight(b_tree));

    DestroyBTree(b_tree);

    return 0;
}