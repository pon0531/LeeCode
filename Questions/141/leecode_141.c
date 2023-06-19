/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode* slow = head;
    struct ListNode* fast = head;

    // until fast pointer to the end
    while (fast != NULL && fast->next != NULL) {

        // slow move 1 step, fast move 2 steps
        slow = slow->next;
        fast = fast->next->next;

        // slow and fast will be the same if cycle exist
        if(slow == fast)
            return 1;
    }

    return 0;
}