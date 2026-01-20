#include<bits/stdc++.h>
using namespace std;

class LRUCache{
    public:
        class Node{
            int key;
            int val;
            Node* prev;
            Node* next;

            Node(int k, int v)
            {
                key = k;
                val = v;
                prev = next = NULL;
            }
        }
        Node* head = new Node(-1, -1);
        Node* tail = new Node(-1, -1);
        int capacity;
        unoordered_map<int, Node*> mp;
        
        LRUCache(int capacity)
        {
            capacity = capacity;
            head->next=tail;
            tail->prev=head;
        }

        int get(int key)
        {

        }
}

int main()
{
    return 0;
}