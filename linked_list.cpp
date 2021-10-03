#include "linked_list.hpp"
#include<cstddef>
linked_list::linked_list()
{
    _head = new node(NULL,NULL,0);
    _tail = _head;
}
node * linked_list::getFirst(){
    return _head;
}
node * linked_list::getLast(){
    return _tail;
}
void linked_list::InsertAtBigning(node * item){
    node *temp = _head;
    _head = temp;
    _head->setLeft(NULL);
    _head->setRight(temp);
    temp->setLeft(_head);
}
void linked_list::InsertLast(node * item){
    node *temp = _tail;
    _tail = temp;
    _tail->setLeft(temp);
    temp->setRight(_tail);
    _tail->setRight(NULL);
}
void linked_list::DeleteLast(){
    node *temp = _tail;
    _tail = temp->getLeft();
    _tail->setRight(NULL);
    delete(temp);
}
void linked_list::DeleteFirst(){
    node *temp = _head;
    _head = _head->getRight();
    _head->setLeft(NULL);
    delete(temp);
}
void linked_list::InsertAt(int index,node *item){
    int counter = 0;
    node *tempitem = _head;
    while (counter<index)
    {
        tempitem = tempitem->getLeft();
        counter++;
    }
    item->setLeft(tempitem);
    item->setRight(tempitem->getRight());
    item->getLeft()->setRight(item);
    item->getRight()->setLeft(item);
}
void linked_list::DeleteAt(int index){
    int counter = 0;
    node *tempitem = _head;
    while (counter<index)
    {
        tempitem = tempitem->getLeft();
        counter++;
    }
    tempitem->getLeft()->setRight(tempitem->getRight());
    tempitem->getRight()->setLeft(tempitem->getLeft());
    delete(tempitem);
}
node * linked_list::FindFirst(int value){
    node *start = _head;
    int counter = 0;
    while (start!=_tail)
    {
        if (start->getValue()==value)
        {
            return start;
        }
        counter++;
        start = start->getRight();
    }
    return NULL;
}
linked_list::~linked_list()
{
}
