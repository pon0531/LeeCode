/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head){

    struct ListNode* slow = head;
    struct ListNode* fast = head;

    // until fast pointer to the end
    while (fast != NULL && fast->next != NULL) {

        // slow move 1 step, fast move 2 steps
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}