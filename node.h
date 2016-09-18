#ifndef NODE_H
#define NODE_H

class Node {

  public:
    Node();
    ~Node();
    int getValue();
    bool getFlag();
    void setValue(int);
    void setFlag();

  private:
    int value;
    bool flag;
}* nodePtr;

#include "node.cpp"

#endif
