//
// Created by andre on 3/25/22.
//
#include "set.h"
Set* init(){
    Set *new_set = (Set*)malloc(sizeof(Set) );
    new_set->length=0;
    new_set->members = malloc(sizeof(int));
    return new_set;
}
bool isEmpty(Set *set){
    if(set->length==0) return true;
    else return false;
}
void insert(Set* set, int member ){
    if(!is_member(set,member)){
        set->members=
                (int*)realloc(set->members,sizeof(int)*set->length+1);
        set->members[set->length]=member;
        set->length++;}
}
int get_length(Set* set){
    return set->length;
}
void print_set(Set* set){
    printf("{");
    for(int i=0;i<set->length;i++){
        if(i==(set->length-1)) printf("%d",set->members[i]);
        else printf("%d,",set->members[i]);;
    }
    printf("}\n");
}
Set* set_union(Set* setA,Set* setB){
    Set* new = init();
    int lengthOfLargestSet = 0;
    if( setA->length>setB->length) lengthOfLargestSet=setA->length;
    else lengthOfLargestSet=setB->length;
    for(int i=0;i<lengthOfLargestSet;i++){
        if(i<setA->length&&i<setB->length){
            insert(new,setA->members[i]);
            insert(new,setB->members[i]);
        }
        else if(i<setA->length) insert(new,setA->members[i]);
        else insert(new,setB->members[i]);
    }
    return new;
}
Set* set_intersection(Set* setA, Set* setB){
    Set* new = init();
    for(int i=0;i<setA->length;i++)
        if(is_member(setB,setA->members[i]))
            insert(new,setA->members[i]);
    return  new;
}

Set* set_difference(Set* setA,Set* setB){
    Set* new = init();
    for(int i=0;i<setA->length;i++)
        if(!is_member(setB,setA->members[i]))
            insert(new,setA->members[i]);
    return  new;
}

bool is_subset(Set* setA,Set* setB){
    for(int i=0;i<setA->length;i++){
        if(!is_member(setB,setA->members[i])) return false;
    }
    return  true;
}
bool is_equal(Set* setA, Set* setB){
    if(setA->length!=setB->length) return false;
    else return is_subset(setA,setB);
}

bool is_member(Set* set,int value){
    for(int i=0;i<set->length;i++)
        if(set->members[i]==value) return true;
    return false;
}