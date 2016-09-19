#include <iostream>

template<class ItemType>
List<ItemType>::List() : tableSize(0){}

template<class ItemType>
List<ItemType>::List(int inputSize) : tableSize(inputSize){
  bucketTable = new Bucket<ItemType>[tableSize];
  for(int x = 0 ; x < tableSize ; x++){
    bucketTable[x] = Bucket<ItemType>();
  }
}

template<class ItemType>
bool List<ItemType>::isFull(){
  for(int x = 0 ; x < tableSize ; x++){
    if(bucketTable[x].value == -1)
      return false;
  }
  return true;
}

template<class ItemType>
List<ItemType>::~List(){
  delete[] bucketTable;
}

template<class ItemType>
int List<ItemType>::hash(ItemType& inputValue, int i){
  return ((inputValue+(i*i))%tableSize);
}

template<class ItemType>
bool List<ItemType>::insert(ItemType& insertValue){
  if (contains(insertValue) != -1){
    std::cout << "Value already in table" << std::endl;
    return false;
  }
  else{ 
    int index = 0;
    std::cout << "else" << std::endl;
    do{
      std::cout << "do" << std::endl;
      int address = hash(insertValue, index);
      if (bucketTable[index].value == -1){
        bucketTable[index].value = insertValue;
        return true;
      }
      index++;
    }while(index < tableSize);
  std::cout << "table is full" << std::endl;
  return false;
  }
}

template<class ItemType>
void List<ItemType>::print(){
  for(int x = 0 ; x < tableSize ; x++){
      std::cout << "bucket num " << x << ": " << bucketTable[x].value;
      if(bucketTable[x].flag){
        std::cout << ", flag: true" << std::endl;        
      }
      else{
        std::cout << ", flag: false" << std::endl;
      }      
  }
}

template<class ItemType>
bool List<ItemType>::remove(ItemType& removeValue){
  int index = contains(removeValue);
  if (index == -1){
    return false;
  }
  else{
    bucketTable[index].value = -1;
    bucketTable[index].flag = true;
    return true;
  }
}

template<class ItemType>
int List<ItemType>::contains(ItemType& inputValue){
  int index = 0;
  int address;
  do{
    address = hash(inputValue, index);
    if(bucketTable[address].value == inputValue){
      return address;
    }
    index++;
  }while(bucketTable[address].flag == true || bucketTable[address].value != -1 && index < tableSize);
  return -1;
}
