#include "Person.h"
#include <string>
#include <iostream>

//General Person methods
void Person::setName(std::string name){
    this->name = name;
}

std::string Person::getName(){
    return name;
}


//Guest methods
Guest::Guest(std::string name, int age){
    this->age = age;
    this->name = name;
}

void Guest::RSVP(bool coming){
    this->isGoing = coming;
}

void Guest::setAge(int age){
    this->age = age;
}

bool Guest::getRSVPStatus(){
    return isGoing;
}

int Guest::getAge(){
    return age;
}

//personList methods
personList::personList()
{
    head = NULL;
    curr = NULL;
    temp = NULL;
    tail = NULL;
}

void personList::addNode(Person newData){
    node* newTail = new node();
    newTail->next = NULL;
    newTail->data = newData;

    if(head){ //if head exists set new node to tail
        tail->next = newTail;
        tail = newTail;
    }else{ //if head is null set new node to head and tail
        head = newTail;
        tail = newTail;
    }
}

void personList::deleteNode(std::string nameOfPerson){//removes node, links adjacent nodes, and adds a free space
    node* nodeToDelete;
    curr = head;
    temp = head;
    while(curr != NULL && curr-> data.getName() != nameOfPerson) { //move p and q (who's one step forward)
        temp = curr;
        curr = curr->next;
    }
    if(curr != NULL) { //if data found, delete node
        while(curr->data.getName() == nameOfPerson){ //integrate through multiple nodes of same data
            nodeToDelete = curr;
            curr = curr->next;
            temp->next = curr;
            if (tail == nodeToDelete) { //if the node to be deleted is the tail, set it to another node
                tail = temp;
            }
            delete nodeToDelete;
        }
    }
    else { //if data not found
        std::cout <<"Person not found!" << std::endl;
    }
}

void personList::printList(){
    if(head){
        curr = head;
        while(curr->next){
            std::cout<<curr->data.getName()<<"  ";
            curr = curr->next;
        }
        std::cout<<curr->data.getName()<<std::endl;
    }else{
    std::cout<< "There are no people saved\n";
    }
    std::cout<<std::endl;
}
