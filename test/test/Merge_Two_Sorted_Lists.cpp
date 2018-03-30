#include "stdafx.h"


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    ListNode *L;
    ListNode *p1, *p2, *p;
    p1 = l1->next;
    p2 = l2->next;
    p = (ListNode)malloc(sizeof(ListNode);
    if (p1->next != NULL) {
        L->next = p1;
        L = p1;
    }
    if (p2->next != NULL) {
        p->next = p2;
        L = p2;
    }
}