#include <stdio.h>

/*
	This program deletes a node from a linked
	list from the location of the node. This 
	involves having to shift any data over from
	the next node then adjusting the next pointer
	to the following node.

*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) {
    struct ListNode* nodeDelete = node;
    if(node->next != NULL){
        node->val = node->next->val;
        nodeDelete = node->next;
        node->next = node->next->next;
    }
    
    free(nodeDelete);
}

