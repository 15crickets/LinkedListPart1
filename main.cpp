/*
Author: Vikram Vasudevan
Date: 12/8/2023
Description: This program is meant to provide a means of creating a linked list. It includes functions that will set the next node, as well as get the next node and the information inside of it.
In the main file there is a test which proves that the program works. 

*/
#include <iostream>
#include <cstring>
#include "node.h"
#include "student.h"

using namespace std;

//testing to show that all functions work

//main
int main(){
    //creating students
    student* firstStudent = new student();
    student* secondStudent = new student();

    //setting ids for students.
    firstStudent->setId(3);
    secondStudent->setId(4);
    //creating nodes.
    node* head = new node(firstStudent);
    node* nextNode = new node(secondStudent);
    //setting nextNode as the next node of head
    head->setNext(nextNode);
    //printing out the id of head's student, and head's next node's student. This should print out a 3, followed by a 4.
    cout << head->getStudent()->getId() << endl;
    cout << head->getNext()->getStudent()->getId() << endl;


 


}
