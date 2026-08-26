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
    ListNode* deleteMiddle(ListNode* head) {

        if(head->next==nullptr) return nullptr;
        ListNode* temp=head;
        int c=0;
        while(temp!=nullptr){
            c++;
            temp=temp->next;
        }
        int len=c/2;
        temp=head;
        for(int i=0;i<len-1;i++){
            temp=temp->next;
        }
        
        temp->next=temp->next->next;
            
        return head;
    }
};