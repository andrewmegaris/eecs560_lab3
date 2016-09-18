#include <cstddef>


Node::Node() : value(-99), flag(false) {}

Node::~Node() { delete this;}

int Node::getValue(){ return this->value;}

bool Node::getFlag(){ return this->flag;}

void Node::setValue(int inputValue){ this->value = inputValue;}

void Node::setFlag(){this->flag = true;}
