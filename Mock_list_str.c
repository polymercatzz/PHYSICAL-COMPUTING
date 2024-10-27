#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct DataNode{
    char *data;
    struct DataNode *next;
}DataNode;

typedef struct SinglyLinkedList {
  unsigned int count;
  DataNode* head;
} SinglyLinkedList;

DataNode* createnode(char *data){
    DataNode *nnode = (DataNode*)malloc(sizeof(DataNode));
    nnode->data = (char *)malloc(strlen(data) + 1);
    strcpy(nnode->data, data);
    nnode->next = NULL;
    return nnode;
}

SinglyLinkedList* createLinklist(){
    SinglyLinkedList *list = (SinglyLinkedList*)malloc(sizeof(SinglyLinkedList));
    list->head = NULL;
    list->count = 0;
    return list;
}

void insert_last(SinglyLinkedList *list, char *data){
    DataNode *pNew = createnode(data);
    if(list->count == 0){
        list->head = pNew;
    }else{
        DataNode *ptr = list->head;
        while(ptr->next){
            ptr = ptr->next;
        }
        ptr->next = pNew;
    }
    list->count++;
}

void traverse(SinglyLinkedList* list) {
    if (list->count == 0) {
        printf("This is an empty list.\n");
        return;
    }
    struct DataNode* pointer = list->head;
    while (pointer->next != NULL) {
        printf("%s -> ", pointer->data);
        pointer = pointer->next;
    }
    printf("%s\n", pointer->data);
}
int main() {
    SinglyLinkedList* mylist = createLinklist();
    int n;
    char condition;
    char data[101];
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf(" %c: %[^\n]s", &condition, data);

        if (condition == 'F') {
            ;
        } else if (condition == 'L') {
            insert_last(mylist, data);
        } else if (condition == 'D') {
            ;
        } else {
            printf("Invalid Condition!\n");
        }
    }

    traverse(mylist);

    // Remember to free allocated memory for each node's data
    DataNode *current = mylist->head;
    while (current != NULL) {
        free(current->data);
        DataNode* temp = current;
        current = current->next;
        free(temp);
    }
    free(mylist);
    return 0;
}