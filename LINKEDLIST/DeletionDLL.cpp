
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
cout<<endl;
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


void InsertLast(int data){
struct node *n,*t,*l;
t=START;
n=(struct node*)malloc(sizeof(struct node*));
n->info=data;
n->next=NULL;
if(START==NULL){
    n->prev=NULL;
    START=n;
    return;
}


while(t != NULL){
    l=t;
    t=t->next;
}
n->prev=l;
l->next=n;
}


void DeleteStart(){
if(START == NULL){
    cout<<"List Empty";
    return;
}

struct node *t=START;
START=t->next;
START->prev=NULL;
free(t);
}

void DeleteLast(){
struct node *t,*l,*p;
t=START;
while(t != NULL){
    l=t;
    t=t->next;
}
p=l->prev;
p->next=NULL;
free(l);
}

int main()
{
    START = NULL;
    InsertStart(10);
    InsertStart(20);
    InsertLast(80);
    InsertLast(90);
    InsertLast(100);
    Print();
    DeleteStart();
    Print();
    DeleteLast();
    Print();

}
