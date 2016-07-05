#include <stdio.h>

/*
 * This program reverses a given linked list.
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *temp, *newList;
    if(head == NULL || head->next == NULL){
        return head;
    }
    newList = head;
    head = head->next;
    newList->next = NULL;
    while(head != NULL){
        temp = head;
        head = head->next;
        temp->next = newList;
        newList = temp;
    }
    return newList;
    
}

