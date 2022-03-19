#ifndef _LINKED_LIST_H
#define _LINKED_LIST_H

#include <iostream>

using node = struct LinkedList *;

struct LinkedList {
  int data;
  LinkedList *next;
};

node createNode() {
  node temp;
  temp = new LinkedList;
  temp->next = nullptr;

  return temp;
}

#endif