class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode*slow=head;
        ListNode*fast=head;
        //Finding Middle
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }

        //Reverse Second Half
        ListNode*prev=NULL;
        while(slow)
        {
            ListNode*next=slow->next;
            slow->next=prev;
            prev=slow;
            slow=next;
        }
        
        //Compare Both Halves
        ListNode*left=head;
        ListNode*right=prev;

        while(right)
        {
            if(left->val!=right->val)
            return false;

            left=left->next;
            right=right->next;
        }

        return true;
    }
};
