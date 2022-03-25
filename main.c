#include "set/set.h"
int main() {
    Set* setA = init();
    if(isEmpty(setA)==true) printf("The set A is empty.\n");
    else printf("The set A is non-empty.\n");
    insert(setA,5);
    insert(setA,7);
    insert(setA,3);
    insert(setA,65);
    printf("Set A: ");
    print_set(setA);

    Set* setB = init();
    if(isEmpty(setA)==true) printf("The set B is empty.\n");
    else printf("The set B is non-empty.\n");
    insert(setB,65);
    insert(setB,2);
    insert(setB,65);
    insert(setB,7);
    insert(setB,1);
    printf("Set B: ");
    print_set(setB);
    Set* setC = set_union(setA,setB);
    printf("Set union of A and B: ");
    print_set(setC);
    printf("Set intersection of A and B: ");
    Set* setD = set_intersection(setA,setB);
    print_set(setD);
    printf(" A-B: ");
    Set* setE = set_difference(setA,setB);
    print_set(setE);
    if(is_subset(setA,setB)) printf("A is a subset of B\n");
    else printf("A is not a subset of B\n");
    Set* setX = init();
    Set* setY = init();
    insert(setY,5);
    if(is_subset(setX,setY)) printf("X is a subset of Y\n");
    else printf("X is not a subset of Y\n");

    if(is_equal(setX,setY)) printf("X is equaly to Y\n");
    else printf("X is not equal to Y\n");


    if(is_member(setA,65)) printf("65 is in set A\n");
    else printf("65 is not in set A\n");


    if(is_member(setA,66)) printf("66 is in set A\n");
    else printf("65 is not in set A\n");
    return 0;


}
