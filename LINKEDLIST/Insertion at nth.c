//Just n-2 and everything clear
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* link;
};

struct node* START=NULL;

void Insert(int data, int n){
    struct node* temp;
    struct node* no = (struct node*)malloc(sizeof(struct node*));
    no->data=data;
    no->link=NULL;

    if(n==1){
       no->link=START;
       START=no;
       return;
    }
    struct node* temp2=START;

    for(int i=0;i<n-2;i++){
        temp2=temp2->link;
    }
    no->link=temp2->link;
    temp2->link=no;
}


void Print(){
struct node *p;

while(p != NULL){
    printf("%d",p->data);
    printf("  ");
    p=p->link;
}
printf("\n");
}

void DeleteNode(int n){
    struct node* tp1=START;

    if(START==NULL){
        printf("Empty");
    }
    else if(n==1){
        START=tp1->link;
        free(tp1);

    }
    // (n-1)th->link = nth node->link;
    //  free(nth node)
        for(int i=0; i<n-2;i++){
        tp1=tp1->link; //(n-1)th node
    }


    struct node* tp2 = tp1->link;//nth node
    tp1->link=tp2->link;
    free(tp2);

}

int main(){
Insert(3,1);//3
Insert(2,1);//23
Insert(4,3);//234
Insert(2,2);//2234
Print();

DeleteNode(1);//224
//DeleteNode(1);//24
Print();

}
