ListNode *detectCycle(ListNode *head) {
        unordered_set<ListNode*> uset;
        
        ListNode* slow = head;
        
        while(slow != NULL){
            if(uset.find(slow) != uset.end())return slow;
            uset.insert(slow);
            slow = slow->next;
        }
        
        return NULL;
    }
