#include <iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct node{
    int info;
    struct node *prev,*next;
};

struct node *START;


void Print(){
struct node *p=START;
while(p != NULL){
    cout<<p->info<<" ";
    p=p->next;
}
}

void InsertStart(int data){
struct node *n;
n=(struct node*)malloc(sizeof(struct node*));
n->info=data;
n->prev=NULL;
if(START==NULL){
    n->next=NULL;
    START=n;
    return;
}
n->next=START;
START=n;
}


int main()
{
    START = NULL;
    InsertStart(10);
    InsertStart(20);
    Print();
    //InsertLast(80);
    //InsertLast(90);
    //Print();
    //DeleteStart();
    //Print();
    //DeleteLast();
    //Print();
    //Print();
}
