// QUESTION NUMBER 138


/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

// class Solution {
// public:
//     Node* copyRandomList(Node* head) {
//         if(head == NULL){
//             return NULL;
//         }

//         unordered_map <Node*, Node*> m;

//         Node* newHead = new Node(head->val);
//         m[head] = newHead;
//         Node* oldHead = head->next;
//         Node* newTemp = newHead;

//         while(oldHead != NULL){
//             Node* copyNode = new Node(oldHead->val);
//             m[oldHead] = copyNode;
//             newTemp->next = copyNode;
//             oldHead = oldHead->next;
//             newTemp = newTemp->next;
//         }

//         oldHead  = head , newTemp = newHead;
//         while(oldHead != NULL){
//             newTemp->random = m[oldHead->random];
//             oldHead = oldHead->next;
//             newTemp = newTemp->next;
//         }

//         return newHead;
//     }
// };