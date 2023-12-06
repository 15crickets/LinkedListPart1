#include <iostream>
#include <cstring>
#include "student.h"

using namespace std;

class node{
 public:
  node* getNext();
  void setNext();
  node(student*);
  ~node();
 private:
  node next;
  student* student;
  




};
