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
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head; 
        int count = 0;

        //Count ALL nodes using a while loop
        while(temp != nullptr){
            count++;
            temp = temp->next;
        }
        //cout << count;

        //Reset temp to the head to start over
        temp=head;  

        // To move exactly count/2 steps
        // For 5 nodes, moves 2 steps (returns 3rd node)
        // For 6 nodes, moves 3 steps (returns 4th node)
        for(int i=0; i<count/2; i++){
            temp = temp->next;
        }
        return temp; //To print the list from the modfied new head
    }
};