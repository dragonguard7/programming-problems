/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode *helper = head;
    while(helper != NULL && helper->next != NULL){

        if(helper->val == helper->next->val){
            struct ListNode *del = helper->next;
            helper->next = helper->next->next;
            free(del);
        }else{
        helper = helper->next;
        }

    }   
    
    return head;
}