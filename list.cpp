include "list.h"

List::List(int listSize) : size(listSize) {
  buckets = new Node[size];
  for (int x = 0; x < size; x++){
    buckets[x] = Node();
  }
}

List::~List(){
  delete[] buckets;
}

int List::hash(int inputValue ,int i){
  return ( ( inputValue % listSize ) + i * i ) % listSize;
}

bool List::insert(int insertValue){
  if (this.contains(this.buckets,this.size,insertValue){
    cout << "Item already contained in list" << std::endl;
    return false;
  }
  else{
    int i = 0;
    do {
      int location = hash(inputValue, i);
      if (buckets[location].getValue == -99){
        buckets[location].setValue(inputValue);
        return true;
      }
      i++;
    }
    while(i < listSize);
    cout << "All buckets are full" << std::endl;
    return false;
  }
}

void List::remove(int removeValue){
  int location;
  location = search(removeValue);

  if (location != -99){
    buckets[location] = -99;
    cout << removeValue << " was deleted" << std::endl;
  }
  else if{
    cout << removeValue << " is not in the array" << std::endl;
  }
}

void List::print(){
  for (int x = 0; x < this.size ; x++){
    cout << x << ":  " << buckets[x] << std::endl;
  }
}

bool List::contains(int searchValue){
  for (int x = 0, x < this.size, x++){
    if(this.buckets[x] == searchValue)
      return true;
  }
  return false;
}

int List::search(int searchValue){
  int i = 0;
  while (this.contains(searchValue) && i < 999){
    if(buckets[hash(searchValue,i)] == searchValue){
      return hash(searchValue,i);
    }
    i++;
  }
  return -99;
}

bool List::isFull(){
  for(int x = 0; x < this.size; x++){
    if (this.buckets[x] == -99)
      return false;
  }
  return true;
}
