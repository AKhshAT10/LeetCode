/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* var1 = headA;
        ListNode* var2 = headB;
        while(var1 != var2){
            var1 = var1->next;
            var2 = var2->next;
            if(var1==var2){
                return var1;
            }
            if(var1==nullptr){
                var1 = headB;
            }
            if(var2==nullptr){
                var2 = headA;
            }
        }
        return var1;
    }
};