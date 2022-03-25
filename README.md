# Implement a set data structure in C

A set is an unordered collection of elements that does not allow for elements to be repeated e.g. the set {5,2,2} is the same as {5,2}.

Functions definitionof the operations implemented:
```c
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
```
