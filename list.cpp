#include <iostream>

#include <list.h>

List::List(int listSize) : this.size(listSize) {
  buckets = new Node[size];
  for (int x = 0; x < size; x++){
    buckets[x] = Node();
  }
}

List::~List(){
  delete[] bucket;
}

int List::hash(int){}

void List::insert(int){}

void List::remove(int){}

void List::print(){}

bool List::contains(){int buckets[], int size, int searchValue){
  for (int x = 0, x < size, x++){
    if(buckets[x] == searchValue)
      return true;
  }
  return false;
}

bool List::isFull(){}
