/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode *itera = list1, *iterb = list1;
        ListNode* iter2 = list2;
        while(iter2->next != nullptr){
            iter2 = iter2->next;
        }
        for(int i = 1; i < a; i++){
            itera = itera->next;
        }
        for(int i = 1; i <= b; i++){
            iterb = iterb->next;
        }
        itera->next = list2;
        iter2->next = iterb->next;
        return list1;
    }
};
