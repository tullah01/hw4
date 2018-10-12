#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

int main() {
    struct node * linked_list;
    printf("Creating a new linked list... Adding a new node storing the value 92.\n");
    linked_list = insert_front(NULL, 92);
    print_list(linked_list);
    
    printf("Adding a new node storing the value 50.\n");
    linked_list = insert_front(linked_list, 50);
    print_list(linked_list);
    
    printf("Adding a new node storing the value 14.\n");
    linked_list = insert_front(linked_list, 14);
    print_list(linked_list);
    
    printf("Clearing the list...!\n");
    linked_list = free_list(linked_list);
    print_list(linked_list);
}
