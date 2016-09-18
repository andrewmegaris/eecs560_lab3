#ifndef _NODE
#define _NODE

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

#endif
