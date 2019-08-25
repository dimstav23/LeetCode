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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* headKeeper = head;
        ListNode* start = head;
        ListNode* startPlusN = head;
        int i;
        
        for (i = 0 ; i < n ; i++)
        {
            startPlusN = startPlusN->next;
        }
        
        if (startPlusN == NULL) //if already reached the end head must be removed
        {
            return headKeeper->next;
        }
        
        while (startPlusN->next != NULL)
        {
            startPlusN = startPlusN->next;
            start = start->next;
        }
        
        start->next = start->next->next;
        return headKeeper;
        
    }
};
