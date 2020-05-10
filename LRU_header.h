//
// Created by Лиза on 11.05.2020.
//



#ifndef LRU_LIZA_LRU_HEADER_H
#define LRU_LIZA_LRU_HEADER_H
//
// Created by Kostenok Elizaveta, Tsepkova Alexandra, Shirikova Ksenia on 10.05.2020.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <ctype.h>
#include <math.h>

//hash table

struct hash* Create_table();

struct hash_node* Check_index (int index, struct hash* table);

void Delete_table(struct hash* table);

struct page {
    int index;
    char* data;
    int n; //кол-во символов
};
struct node {
    char* data;
    int index;
    struct node* next;
    struct node* prev;
};

struct queue
{
    int capacity;
    int length;
    struct node* head;
    struct node* tail;
};

#endif //LRU_LIZA_LRU_HEADER_H


