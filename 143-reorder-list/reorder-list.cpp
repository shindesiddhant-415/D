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
    void reorderList(ListNode* head) {
        ListNode* temp=head;
        ListNode* slow=head;
        ListNode* fast=head;

        if(head==nullptr || head->next==nullptr || head->next->next==nullptr)  {
            return ;
        }

        while(fast!=nullptr && fast->next!=nullptr ){
            slow=slow->next;
            fast=fast->next->next;
        }
        temp=slow;
        slow=head;
        ListNode* pre=nullptr;
        ListNode* ne=nullptr;
        while(temp!=nullptr){
            ne=temp->next;
            temp->next=pre;
            pre=temp;
            temp=ne;
        }

       
        while( pre!=nullptr && pre->next!=nullptr){
            slow=head->next;
            head->next=pre;
            pre=pre->next;
            head->next->next=slow;
            head=slow;
        }
        

    }
};