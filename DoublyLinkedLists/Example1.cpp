#include <iostream>
using namespace std;
class Node{
  public:
    int value;
    Node* next;
    Node* prev;
    //Constructor
    Node(int value){
      this->value = value;
      next = nullptr;
      prev = nullptr;

    }
};

class DoublyLinkedList{
  private:
    Node* head;
    Node* tail;
    int length;
  public:
    DoublyLinkedList(int value){
      Node* newNode = new Node(value);
      head = newNode;
      tail = newNode;
      length = 1;
    }
};


int main(){
  DoublyLinkedList* myDLL = new DoublyLinkedList(10);

  return 0;
}