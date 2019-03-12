#include <stdio.h>
#include <stdlib.h>

struct node {
    char data;
    struct node *next;
    struct node *prev;
};

struct node *head = NULL;
struct node *tail = NULL;
int list_size = 0;

void addHead(char data) {
    if (list_size == 0) {
        head = (struct node*)malloc(sizeof(struct node));
        head->data = data;
        head->next = NULL;
        head->prev = NULL;
        tail = head;
        list_size++;
        return;
    }
    else {
        struct node *newest = malloc(sizeof(struct node));
        newest->data = data;
        newest->next = head;
        head->prev = newest;
        newest->prev = NULL;
        head = newest;
        list_size++;
        return;
    }
}

char removeHead() {
    if (head == NULL) {
        return NULL;
    }
    else {
        char answer = head->data;
        struct node *temp = head;
        head = head->next;
        head->prev = NULL;
        free(temp);
        list_size--;
        return answer;
    }
}

void addAfter(char a, char data) {
    struct node *newest = malloc(sizeof(struct node));
    newest->data = data;
    struct node *temp = head;
    while (temp != NULL && temp->data != a) {
        temp = temp->next;
    }
    if (temp == NULL) {
        return;
    }
    else {
        newest->next = temp->next;
        temp->next->prev = newest;
        newest->prev = temp;
        temp->next = newest;
        list_size++;
    }
}

void size() {
    printf("%d\n", list_size);
}

void print() {
    struct node *temp = head;
    while (temp != NULL) {
        printf("%c -> ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void print_backwards() {
    struct node *temp = tail;
    while (temp != NULL) {
        printf("%c -> ", temp->data);
        temp = temp->prev;
    }
    printf("\n")s;
}

int main()
{
    //test program 
    addAfter('x', 'y');
    addHead('a');
    addHead('b');
    addHead('c');
    addAfter('c', 'g');
    addHead('d');
    removeHead();
    addHead('e');
    addAfter('c', 'f');
    addAfter('p', 'q');
    size();
    print();
    print_backwards();
    return 0;
}
