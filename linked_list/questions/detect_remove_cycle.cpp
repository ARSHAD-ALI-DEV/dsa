// LEETCODE 141 AND 142

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class LinkedList
{
    Node *head;

public:
    LinkedList()
    {
        head = NULL;
    }

    void push_back(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }

            temp->next = newNode;
        }
    }

    void print()
    {
        if (head == NULL)
        {
            return;
        }
        else
        {
            Node *temp = head;
            while (temp != NULL)
            {
                cout << temp->data << "==>";
                temp = temp->next;
            }

            cout << "NULL" << endl;
        }
    }
};

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         ListNode* slow = head;
//         ListNode* fast = head;

//         while(fast != NULL && fast->next != NULL){
//             slow = slow->next;
//             fast = fast->next->next;

//             if(slow == fast){
//                 return true;
//             }
//         }

//         return false;
//     }
// };


// QUESTION 142
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// class Solution {
// public:
//     ListNode *detectCycle(ListNode *head) {
//         ListNode* slow = head;
//         ListNode* fast = head;

//         bool isCycle = false;

//         while(fast != NULL && fast->next != NULL){
//             slow = slow->next;
//             fast = fast->next->next;

//             if(slow == fast){
//                 isCycle = true;
//                 break;
//             }
//         }
//         if(!isCycle){
//             return NULL;
//         }

//         slow = head;
//         while(slow != fast){
//             slow = slow->next;
//             fast = fast->next;
//         }

//         return slow;

//     }
// };

int main()
{

    LinkedList lls;

    lls.print();

    lls.push_back(10);
    lls.push_back(20);
    lls.push_back(30);
    lls.print();

    cout << "hello";
    return 0;
}