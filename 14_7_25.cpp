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
 // LEETCODE - 1290
 
class Solution {
public:
    int getDecimalValue(ListNode* head) {

       vector<int> bits;
    
    // Step 1: Traverse the list and store values in the vector
    ListNode* current = head;
    while (current != nullptr) {
        bits.push_back(current->val);
        current = current->next;
    }

    // Step 2: Convert binary to decimal
    int result = 0;
    int power = 0;

    // Traverse the vector from the end (LSB to MSB)
    for (int i = bits.size() - 1; i >= 0; --i) {
        result += bits[i] * pow(2, power);
        power++;
    }

    return result;

    }
};