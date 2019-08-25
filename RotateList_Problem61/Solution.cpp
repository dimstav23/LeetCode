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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp = head;
        int count = 0;
        
        //count the elements of the list O(n)
        while (temp != NULL)
        {
            count++;
            temp = temp->next;
        }
        int moves=0;
        if (count !=0)
            moves = k % count; //if k>nodes return how many actual moves we need
        
        if (moves == 0) // if we don't need any moves return the actual head
        {
            return head;
        }
        
        ListNode* newHead = head;
        temp = head;
        //otherwise move one newHead pointer "count-moves" positions ahead to find the new head
        for (int i = 0 ; i < (count-moves); i++)
        {
            temp = newHead;
            newHead = newHead->next;
        }
        temp->next = NULL;
        temp = newHead;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        
        temp->next = head;
        return newHead;        
    }
};
