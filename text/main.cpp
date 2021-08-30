#include<bits/stdc++.h>
using namespace std ;
template<typename T>
class linkedlist
{
private:
    class Node{
    public:
        T datee;
        Node* nxt;
        Node(){
            datee= T();
            nxt = nullptr;
        }
    };
    Node* head;
    Node* tail;
    int sizee;

public:
        linkedlist(){
            head =tail =nullptr;
            sizee= 0;
        }
        ~linkedlist()
        {
            clear();
        }
        void push_front(const T &val)
        {
            Node *tmp =new Node;
            tmp->datee=val;
            tmp->nxt =head;
            if(head == nullptr)
                tail =tmp;
            head =tmp;
            sizee++;
        }

};
int main(){



return 0;
}
