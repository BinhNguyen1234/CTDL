#include <stdio.h>
#include <iostream>
using namespace std;
struct node {
    int data = 0;
    node *next = nullptr;
    node(int initValue){
        this->data = initValue;
    }
    node(){

    };
};

struct SLinkedList{
    node* headNode;
    node* currentNode;
    SLinkedList(int initValue){
        headNode = new node(initValue);
        currentNode = headNode;
    };
    void addValueToTail(int value){
        node* valueNode = new node();
        valueNode->data = value;
        currentNode->next = valueNode;
        currentNode = valueNode;
     
    }
    void addValueToHead(int value){
        node* valueNode = new node();
        valueNode->data = value;
        
    }
    void printAllValue(){
        node* temp = headNode;
        do {
            std::cout << temp->data;
            temp = temp->next;
        } while (temp !=nullptr);
    }
    node* getFinalNode(){
        node* temp = headNode;
        while(temp->next!= nullptr){
            temp = temp->next;
        }
        return temp;
    }
};

int main(int argc,char **argv){
    SLinkedList *testList = new SLinkedList(4);
    testList->addValueToTail(5);
    testList->addValueToTail(6);
    testList->addValueToTail(7);
    testList->addValueToTail(8);
    testList->printAllValue();
    node* filnal = testList->getFinalNode();
    std::cout << filnal->data;
}