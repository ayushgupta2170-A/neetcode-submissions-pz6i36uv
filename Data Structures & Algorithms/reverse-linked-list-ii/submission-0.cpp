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
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        if(left==right)return head;
        ListNode* start=new ListNode(0);
        start->next=head;
        ListNode* prev=start;

        // left tak jao
        for(int i=1;i<left;i++)
            prev=prev->next;

        ListNode* curr=prev->next;
        // reverse krdo
        for(int i=0;i<right-left;i++){

            ListNode* temp=curr->next;
            curr->next=temp->next;
            temp->next=prev->next;
            prev->next=temp;
        }

        return start->next;
    }
};