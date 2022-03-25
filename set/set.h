//
// Created by andre on 3/25/22.
//

#ifndef SET_IMPLEMENTATION_SET_H
#define SET_IMPLEMENTATION_SET_H
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
typedef struct {
    int* members;
    int length;
}Set;
Set* init();
bool isEmpty(Set *set);
void insert(Set* set, int member );
int get_length(Set* set);
void print_set(Set* set);
Set* set_union(Set* setA, Set* setB);
Set* set_intersection(Set* setA, Set* setB);
Set* set_difference(Set* setA, Set* B);
bool is_subset(Set* setA, Set* B);
bool is_equal(Set* setA, Set* setB);
bool is_member(Set* set, int value);
#endif //SET_IMPLEMENTATION_SET_H
