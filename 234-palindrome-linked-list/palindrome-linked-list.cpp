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
        ListNode* temp=head;
        int count=0;
        while(temp!=nullptr){
            count++;
            temp=temp->next;
        }
        temp=head;
        for(int i=0;i<count/2;i++){
            temp=temp->next;
        }
        ListNode* pre=nullptr;
        ListNode* ne=nullptr;
        while(temp!=nullptr){
            ne=temp->next;
            temp->next=pre;
            pre=temp;
            temp=ne;
        }

        ListNode* first=head;
        ListNode* second=pre;
        for(int i=0;i<count/2;i++){
            if(first->val!=second->val){
                return false;
            }
            first=first->next;
            second=second->next;
        }
        return true;

        
    }
};