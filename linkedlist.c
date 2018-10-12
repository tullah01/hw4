#include <stdio.h>
#include <stdlib.h>

struct node {int i; struct node *next;};

void print_list(struct node * head) {
    if (head == NULL) printf("nil");
    while ( head != NULL) {
        printf("%d -> ", head->i);
        head = head->next;
    }
    printf("\n");
}


struct node * insert_front(struct node * head, int x) {
    struct node *new = (struct node*)malloc(sizeof(struct node));
    new->i = x;
    new->next = head;
    return new;
    
} 

struct node * free_list(struct node * head) {
    struct node * nxt;
    struct node * frst;
    while ( head != NULL) {
        nxt = head->next;
        free(head);
        head = nxt;
    }
    frst = NULL;
    return frst;
}
