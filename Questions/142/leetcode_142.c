

struct ListNode* detectCycle(struct ListNode* head) {
    struct ListNode* slow = head;
    struct ListNode* fast = head;

    // Check if there is a cycle in the linked list
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            break; // Cycle detected
        }
    }

    // If there is no cycle, return NULL
    if (!fast || !fast->next) {
        return NULL;
    }

    // Reset slow pointer to the head of the list
    slow = head;

    // Move both pointers one step at a time until they meet again
    while (slow != fast) {
        slow = slow->next;
        fast = fast->next;
    }

    // Return the meeting point as the starting node of the cycle
    return slow;
}