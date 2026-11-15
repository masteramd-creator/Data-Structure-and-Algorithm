/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* getIntersectionNode(struct ListNode* headA,
                                     struct ListNode* headB) {
    int a = 0;
    int b = 0;

    struct ListNode* temp1;
    struct ListNode* temp2;
    temp1 = headA;
    temp2 = headB;
    while (temp1) {
        temp1 = temp1->next;
        a++;
    }
    while (temp2) {
        temp2 = temp2->next;
        b++;
    }
    temp1 = headA;
    temp2 = headB;
    if (a > b) {
        int d = a - b;
        while (d) {
            temp1 = temp1->next;
            d--;
        }
    } else {
        int d = b - a;
        while (d) {
            temp2 = temp2->next;
            d--;
        }
    }

    while (temp1 != NULL && temp2 != NULL) {
        if (temp1 == temp2)
        {
            return temp1;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    return NULL;
}