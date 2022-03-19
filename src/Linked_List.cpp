#include "Linked_List.h"

node addNode(node head, int value) {
  node temp, p;
  temp = createNode();
  temp->data = value;

  if (head == nullptr) {
    head = temp;
  } else {
    p = head;
    std::cout << temp->data << std::endl;
    
    while (p->next != nullptr) {
      std::cout << p->data << std::endl;
      p = p->next;
    }
    p->next = temp;
  }

  return head;
}

#if 1
int main(int argc, char const *argv[]) {
  node node1, node2;
  node1 = new LinkedList;
  node2 = new LinkedList;

  node2 = addNode(node1, 74);
  // while (p != nullptr) {
  //   p = p->next;
  // }

  return 0;
}
#endif