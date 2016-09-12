//
//  ch.c
//  Exercice5
//
//  Created by Nahom Hailu on 19/08/16.
//  Copyright (c) 2016 Nahom. All rights reserved.
//

#include "ch.h"
typedef char Cchar;
Cchar read_charcter(Cchar *mychar, char *prompt){
    printf("%s",prompt);
    fflush(stdin);
    *mychar = getchar();
    return *mychar;
}
int compare_character(const Cchar char1, const Cchar char2){
    if ((int)char1 < (int)char2)
        return -1;
    else if ((int)char1 == (int)char2)
        return 0;
    else
        return 1;
}
void print_character(const Cchar  mychar){
    printf("%c\n",mychar);
}
