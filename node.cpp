#include <iostream>
#include <cstring>
#include "node.h"
#include "student.h"

//constructor, in which the student is set.
node::node(student* currentStudent){
    stu = currentStudent;
    next = NULL;

}

//function that returns the student corresponding to the current node.
student* node::getStudent(){
    return stu;
}

//function that sets the next node in the chain.
void node::setNext(node* nextNode){
    next = nextNode;

}

//function that returns the next node in the chain.
node* node::getNext(){
    return next;
}
//destructor, which clears the heap when the node is destroyed.
node::~node(){
    //Zayeed Saffat reminded me that I need to delete the student pointer in my destructor.
    delete stu;

}

