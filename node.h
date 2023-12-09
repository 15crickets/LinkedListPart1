#ifndef NODE_H
#define NODE_H
#include <iostream>
#include <cstring>
#include "student.h"

using namespace std;

class node{

 public:
 //declaring functions
  node* getNext();
  void setNext(node* nextNode);
  student* getStudent();
  node(student* currentStudent);
  ~node();
 private:
 //creating variables
  node* next;
  student* stu;
  




};
#endif

