class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int c=0;
        ListNode * search = head;
        while(search->next != nullptr){
            search = search->next;
            c++;
        }
        ListNode * re = head;
        for(int k=0; k < (c+1)/2; k++)
            re = re->next;
            
        return re;
    }
};