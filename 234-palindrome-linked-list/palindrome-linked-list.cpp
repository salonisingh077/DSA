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
    bool isPalindrome(ListNode* head) {
        vector<int> vals;
        while(head){
            vals.push_back(head->val);
            head=head->next;

        }
        int i=0,j =vals.size()-1;
        while(i<j){
            if(vals[i]!=vals[j]) return false;
            i++;
            j--;
        }
        return true;
        
    }
};