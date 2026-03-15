/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

// merge two sorted lists
ListNode* sortedMerge(ListNode* head1, ListNode* head2) {

    if(!head1) return head2;
    if(!head2) return head1;

    ListNode* dummy = new ListNode(-1);
    ListNode* tail = dummy;

    while(head1 != NULL && head2 != NULL) {

        if(head1->val <= head2->val) {
            tail->next = head1;
            head1 = head1->next;
        }
        else {
            tail->next = head2;
            head2 = head2->next;
        }

        tail = tail->next;
    }

    if(head1 != NULL)
        tail->next = head1;
    else
        tail->next = head2;

    return dummy->next;
}


// divide and merge
ListNode* solve(vector<ListNode*>& lists, int left, int right) {

    if(left > right) return NULL;

    if(left == right)
        return lists[left];

    int mid = (left + right) / 2;

    ListNode* l1 = solve(lists, left, mid);
    ListNode* l2 = solve(lists, mid + 1, right);

    return sortedMerge(l1, l2);
}


ListNode* mergeKLists(vector<ListNode*>& lists) {

    if(lists.size() == 0)
        return NULL;

    return solve(lists, 0, lists.size() - 1);
}



/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

// merge two sorted lists
ListNode* sortedMerge(ListNode* head1, ListNode* head2) {

    if(!head1) return head2;
    if(!head2) return head1;

    ListNode* dummy = new ListNode(-1);
    ListNode* tail = dummy;

    while(head1 != NULL && head2 != NULL) {

        if(head1->val <= head2->val) {
            tail->next = head1;
            head1 = head1->next;
        }
        else {
            tail->next = head2;
            head2 = head2->next;
        }

        tail = tail->next;
    }

    if(head1 != NULL)
        tail->next = head1;
    else
        tail->next = head2;

    return dummy->next;
}


// divide and merge
ListNode* solve(vector<ListNode*>& lists, int left, int right) {

    if(left > right) return NULL;

    if(left == right)
        return lists[left];

    int mid = (left + right) / 2;

    ListNode* l1 = solve(lists, left, mid);
    ListNode* l2 = solve(lists, mid + 1, right);

    return sortedMerge(l1, l2);
}


ListNode* mergeKLists(vector<ListNode*>& lists) {

    if(lists.size() == 0)
        return NULL;

    return solve(lists, 0, lists.size() - 1);
}