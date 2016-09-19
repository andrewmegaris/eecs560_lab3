#include <fstream>
#include <iostream>
#include <string>

#include "list.h"

int main(int argc, char** argv){

  int bucketTableSize;
  int bucketValue;
  int userInput = 0;

  std::ifstream inputFile;
  inputFile.open("data.txt");
  
  if(!inputFile){
    std::cout << "Error Opening File" << std::endl;
    return 0;
  }

  inputFile >> bucketTableSize;
  
  List<int> hashTable(bucketTableSize);

  while (inputFile >> bucketValue){
    hashTable.insert(bucketValue);
  }

  while(userInput != 4){
    std::cout << "Please choose on of the following commands" << std::endl;
    std::cout << "1 - insert " << std::endl;
    std::cout << "2 - delete " << std::endl;
    std::cout << "3 - print " << std::endl;
    std::cout << "4 - exit " << std::endl;
    std::cout << "-----------" << std::endl;
    std::cout << "user input: "; 
    std::cin >> userInput;
    switch(userInput){
      case 1:
        std::cout << "What number do you want to insert into the hash table?" << std::endl;
        std::cin >> bucketValue;
        hashTable.insert(bucketValue);
        break;
      case 2:
        std::cout << "What number do you want to remove from the hash table?" << std::endl;
        std::cin >> bucketValue;
        hashTable.remove(bucketValue);
        break;
      case 3:
        hashTable.print();
        break;
      case 4: 
        std::cout << "exiting" << std::endl;
        break;
      default:
        std::cout << "invalid input" << std::endl;
        break;
    }




  }
}

