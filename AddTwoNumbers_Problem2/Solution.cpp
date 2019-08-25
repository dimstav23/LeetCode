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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* res = new ListNode(0);
        ListNode* currentHead = res;       
        int op1, op2, sum;
        
        while (l1 != NULL || l2 != NULL)
        {
            op1 = l1 != NULL ? l1->val : 0;
            op2 = l2 != NULL ? l2->val : 0;
            sum = op1 + op2 + carry;
            carry = sum / 10;
            currentHead->next = new ListNode(sum%10);
            currentHead = currentHead->next;
            l1 = l1!=NULL ? l1->next : l1;
            l2 = l2!=NULL ? l2->next : l2;
        }
        
        if (carry)
        {
            currentHead->next = new ListNode(carry);
        }
        
        return res->next; // to avoid the initial zero node
    }
};
