// linklist.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}
/*单个节点的结构*/
typedef struct ListNode {
    int val;
    struct ListNode* next;
}ListNode;
/*构造函数*/
ListNode* newListNode(int val) {
    ListNode* node;
    node = (ListNode*)malloc(sizeof(ListNode));
    node->val = val;
    node->next = NULL;
    return node;

}
/*初始化链表*/
ListNode* n0 = newListNode(1);
ListNode* n1 = newListNode(3);
ListNode * n2 = newListNode(2);
ListNode * n3 = newListNode(5);
ListNode* n4 = newListNode(4);
// 构建节点之间的引用
n0->next = n1;
n1->next = n2;
n2->next = n3;
n3->next = n4;
/* 在链表的节点 n0 之后插入节点 P */
void insert(ListNode* n0, ListNode* P) {
    ListNode* n1 = n0->next;
    P->next = n1;
    n0->next = P;
}
/* 删除链表的节点 n0 之后的首个节点 */
void removeItem(ListNode* n0) {
    if (!n0->next)
        return;
    // n0 -> P -> n1
    ListNode* P = n0->next;
    ListNode* n1 = P->next;
    n0->next = n1;
    // 释放内存
    free(P);
}
/*访问节点*/
ListNode* access(ListNode* head, int index) {
    for (int i = 0; i < index; i++) {
        if (head == NULL)
            return NULL;
        head = head->next;
    }
    return head;
}
/* 在链表中查找值为 target 的首个节点 */
int find(ListNode* head, int target) {
    int index = 0;
    while (head) {
        if (head->val == target)
            return index;
        head = head->next;
        index++;
    }
    return -1;
}
