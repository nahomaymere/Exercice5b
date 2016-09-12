//
//  list.h
//  Exercice5
//
//  Created by Nahom Hailu on 19/08/16.
//  Copyright (c) 2016 Nahom. All rights reserved.
//

#ifndef Exercice5_list_h
#define Exercice5_list_h
#define Do_list_header(Titem, MAX)\
typedef struct{\
    int count;\
Titem array[MAX];\
}Tlist##Titem;\
void initalize_list_##Titem(Tlist##Titem *list);\
int insert_item_##Titem(Tlist##Titem *list, Titem item);\
int retrieve_ith_##Titem(const Tlist##Titem *list, int i, Titem *item);\
int number_of_items##Titem(const Tlist##Titem *list);\
int list_empty_##Titem(const Tlist##Titem *list);
//END Do_list_header

#define Do_list_imp(Titem, MAX)\
void initalize_list_##Titem(Tlist##Titem *list){ list->count = 0;}\
int insert_item_##Titem(Tlist##Titem *list, Titem item){\
    if( list->count < MAX){\
        list->array[count++] = item;\
        return 1;\
    }\
    return 0;\
}\
int retrieve_ith_##Titem(const Tlist##Titem *list, int i, Titem *item){\
    if(!list_empty(list) && i < list->count){\
        *item = list->array[i];\
        return 1;\
    }\
    else\
        return 0;\
}\
int number_of_items##Titem(const Tlist##Titem *list){ return list->count;}\
int list_empty_##Titem(const Tlist##Titem *list){ return !list->count;}

//END DO_LIST_IMP
#endif
