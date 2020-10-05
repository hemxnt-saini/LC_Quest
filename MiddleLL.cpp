#include<iostream>
#include<stdio.h>
#include<stdlib.h>

struct node{
int info;
struct node *next;
};

struct node *start;

void Insert(int data){
struct node *n=(struct node*)malloc(sizeof(struct node*));
n->info=data;
if(start==NULL){
    n->next=NULL;
    start=n;
    return;
}
n->next=start->next;
start=n;
}

void Print(){
struct node *t=start;
while(t != NULL){
    cout<<t->info;
    t=t->next;
}
printf("\n");
}


int main(){
start=NULL;
Insert(10);
Insert(20);
Insert(30);
Insert(40);
Insert(50);
Print();
//getMiddle();
}
