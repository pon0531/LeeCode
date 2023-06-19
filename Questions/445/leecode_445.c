/*
base on below leecode questions
2. Add Two Numbers
206. Reverse Linked List

reverse l1, l2
sum l1, l2
reverse sum list

*/


struct ListNode* reverseListIterative(struct ListNode* head) {
    struct ListNode* prev = NULL;
    struct ListNode* curr = head;
    struct ListNode* next = NULL;

    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}

struct ListNode* reverseListRecursive(struct ListNode* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }

    struct ListNode* reversedList = reverseListRecursive(head->next);
    head->next->next = head;
    head->next = NULL;

    return reversedList;
}

struct ListNode* createNode(int value) {
    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    
    newNode->val = value;
    newNode->next = NULL;
    
    return newNode;
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    
    // create initial note 0 , dummy
    struct ListNode* dummy = createNode(0);

    // use curr pointer to record current pointer
    struct ListNode* curr = dummy;

    // carry to record if the carry is needed 
    int carry = 0;
    
	// reverse l1
    l1 = reverseListRecursive(l1);
    printList(l1);
	
	// reverse l2
    l2 = reverseListRecursive(l2);
    printList(l2);

    while (l1 || l2 || carry) {
        int sum = carry;

        // sum add l1 val
        if (l1) {
            sum += l1->val;
            l1 = l1->next;
        }
        // sum add l2 val
        if (l2) {
            sum += l2->val;
            l2 = l2->next;
        }
        
        //check carry if needed, used for next turn
        carry = sum / 10;

        // create a new sum node % 10
        curr->next = createNode(sum % 10);
        
        //current move to next
        curr = curr->next;
    }
    // final return the dummy pointer , the start of the sum linked list

	// return reverse sum linked list
    return reverseListRecursive(dummy->next);
}

void printList(struct ListNode* head) {
    struct ListNode* curr = head;
    
    while (curr != NULL) {
        printf("%d ", curr->val);
        curr = curr->next;
    }
    
    printf("\n");
}
