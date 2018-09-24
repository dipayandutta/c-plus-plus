#include <stdio.h>
#include <stdlib.h>

struct SLNode {
    struct SLNode *next;
    long value;
};

void sl_push_front(struct SLNode **list, long v){
    //Create new node, add the value.
    struct SLNode* node = malloc(sizeof(struct SLNode));
    node->value = v;
    node->next = *list;
    //Change the head to be the newly created node
    *list = node;
    return;
}

void sl_display(struct SLNode *list){
    while(list){
        printf("%lu\n", list->value);
        list = list->next;
    }
    return;
}

int main(int argc, char const *argv[])
{
    struct SLNode *list = NULL;
    for (int i = 0; i < 10; ++i)
    {
        sl_push_front(&list, i);
    }
    sl_display(list);
    return 0;
}