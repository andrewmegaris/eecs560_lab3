#include "list.h"

using namespace std;

int main(int argc, char** argv){

int bucketLength;
int inputNumber;
int userInput = 1;
int inputValue;
ifstream infile("data.txt");

if (!infile){ cout << "file read error" << std::endl; return 0;}
infile >> bucketLength;
List hashTable = List(bucketLength);
while (infile >> inputNumber){
  hashTable.insert(inputNumber);
}
cout << "starting list: ";
hashTable.print();

while(userInput != 4){
  cout << "1. Insert new item" << std::endl;
  cout << "2. Delete an item" << std::endl;
  cout << "3. Print hash table" << std::endl;
  cout << "4. Exit program" << std::endl;
  cin >> userInput;

  switch(userInput){
    case 1: 
            cout << "Type input value: ";
            cin >> inputValue;
            hashTable.insert(inputValue);
            break;
    case 2: 
            cout << "Type delete value: ";
            cin >> inputValue;
            hashTable.remove(inputValue);
            break;
    case 3: 
            cout << "printing current list" << std::endl;
            hashTable.print();
            break;
    case 4:
            cout << "Exiting program" << std::endl;
            break;
    default:
            cout << "invalid input" << std::endl;
            break;
  }
}

}
