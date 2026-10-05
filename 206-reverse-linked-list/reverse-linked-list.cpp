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
    ListNode* reverseList(ListNode* head) {
        if(!head) return nullptr;
        vector<int>val;
        ListNode* curr=head;
        while(curr!=nullptr){
            val.push_back(curr->val);
            curr=curr->next;
        }
        reverse(val.begin(),val.end());
        curr=head;
        int i=0;
        while(curr!=nullptr){
            curr->val=val[i++];
            curr=curr->next;
        }
        return head;
    }
};