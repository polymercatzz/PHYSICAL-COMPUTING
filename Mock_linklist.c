#include<stdio.h>
#include<stdlib.h>

typedef struct DataNode{
    unsigned int data;
    struct DataNode *next;
}DataNode;

typedef struct Linklist{
    unsigned int count;
    DataNode *head;
}Linklist;

DataNode* createnode(int data){
    DataNode *node = (DataNode *)malloc(sizeof(DataNode));
    node->data = data;
    node->next = NULL;
    return node;
}

void adddata(Linklist *list,int data){
    DataNode *pNew = createnode(data);
    if(list->head == 0){
        list->head = pNew;
    }else{
        DataNode *ptr = list->head;
        while(ptr->next != NULL){
            ptr = ptr->next;
        }
        ptr->next = pNew;
    }
    list->count++;
}

void addposi(Linklist *list,int posi,int data){
    int i;
    DataNode *pNew = createnode(data);
    if(list->head == 0){
        list->head = pNew;
    }else if(posi==0){
        DataNode *ptr = list->head;
        list->head = pNew;
        pNew->next = ptr;
    }else{
        DataNode *ptr = list->head;
        for(i=1;i<posi;i++){
            ptr = ptr->next;
        }
        DataNode *current = ptr->next;

        if(ptr->next){
            ptr->next = pNew;
            pNew->next = current;
        }else{
            ptr->next = pNew;
        }
    }
    list->count++;
}

Linklist* createlinklist(){
    Linklist *list = (Linklist *)malloc(sizeof(Linklist));
    list->count = 0;
    list->head = NULL;
    return list;
}

void traverse(Linklist *list){
    DataNode *ptr = list->head;
        while(ptr){
            printf("%d ",ptr->data);
            ptr = ptr->next;
        }
}

int main(){
    int num,i,getint,posi;
    Linklist *list = createlinklist();
    scanf("%d ",&num);
    for(i=0;i<num;i++){
        scanf("%d",&getint);
        adddata(list,getint);
    }
    scanf("%d %d",&posi,&getint);
    addposi(list,posi,getint);
    traverse(list);
    free(list);
    return 0;
}
