// test.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <vector>
#include <iostream>
#include <list>
using namespace std;

struct ListNode {
    int m_key;
    ListNode* next;
};
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int count = nums.size();
        for (int i = 0; i < count; i++) {
            for (int j = 0; j < count; j++) {
                if (target == nums[i] + nums[j] && i != j) {
                    return{ i,j };
                }
            }
        }
        return{};
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* p = (ListNode*)malloc(sizeof(ListNode));
        p->next = NULL;
        while (l1->next != NULL && l2->next != NULL) {
            p->m_key = l1->m_key + l2->m_key;
            l1 = l1->next;
            l2 = l2->next;
            p = p->next;
        }
        return p;
    }
};

int main()
{
    int num = 0;
    int reversenum = 0;
    bool b = isValid("()");
    //cout << prestr << endl;
    return 0;
}

