//
//  list.h
//  Exercice5
//
//  Created by Nahom Hailu on 19/08/16.
//  Copyright (c) 2016 Nahom. All rights reserved.
//

#ifndef Exercice5_list_h
#define Exercice5_list_h

#define DO_LIST_HEADER (Titem,MAX)\
typedef struct{\
    int count\
    Titem array[MAX]\
}Tlist ## Titem;

#define DO_LIST_IMP(Titem,MAX)\
void initialize_list(Tlist ##Titem){ \
    list->count = 0; \
}\
int insert_item ## Titem(Tlist ## Titem *list, Titem item){\
    .\
    .\
    .}
//END DO_LIST_IMP
#endif
