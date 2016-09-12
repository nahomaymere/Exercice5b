//
//  application.c
//  Exercice5
//
//  Created by Nahom Hailu on 29/08/16.
//  Copyright (c) 2016 Nahom. All rights reserved.
//

#include <stdio.h>
#include "ch_list.h"
#define Do_test_header(MAX) \
typedef struct{\
 char string[MAX];\
}Ttest;\
void intitalize(char *st);

#define Do_test(MAX)\
    void intitalize(char *st){\
        for(int i = 0; i < MAX; i++)\
            st[i] = 'N';\
    };

Do_test_header(10)
int main(){
    
    return 0;
}
//Do_test(10)