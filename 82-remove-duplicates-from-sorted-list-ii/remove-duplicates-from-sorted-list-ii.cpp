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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head) return nullptr;
        ListNode dummy(0,head);
        ListNode* prev=&dummy;
        while(head){
            if(head->next &&head->val==head->next->val){
                int dupVal=head->val;
                while(head &&head->val==dupVal){
                    head=head->next;
                }
                prev->next=head;
            }else{
                prev=prev->next;
                head=head->next;
            }
        }
        return dummy.next;
    }
};