class node
{
private:
    node *_left;
    node *_right;
    int _value;
public:
    node(node *left,node *right,int value);
    int getValue();
    void setValue(int value);
    node* getLeft();
    node* getRight();
    void setLeft(node* left);
    void setRight(node* left);
    ~node();
};

