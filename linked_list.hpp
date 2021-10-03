#include "node.hpp"
class linked_list
{
private:
    node *_head;
    node *_tail;
public:
    linked_list();
    node *getFirst();
    node *getLast();
    void InsertAtBigning(node * item);
    void InsertLast(node * item);
    void DeleteLast();
    void DeleteFirst();
    void InsertAt(int index,node *item);
    void DeleteAt(int index);
    node * FindFirst(int value);
    ~linked_list();
};

