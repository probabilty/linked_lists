#include "node.hpp"

node::node(node *left,node *right,int value)
{
    _value = value;
    _left = left;
    _right = right;
}
int node::getValue(){
    return _value;
}
void node::setValue(int value){
    _value = value;
}
node* node::getLeft(){
    return _left;
}
node* node::getRight(){
    return _right;
}
void node::setLeft(node* left){
    _left = left;
}
void node::setRight(node* right){
    _right = right;
}
node::~node()
{
}
