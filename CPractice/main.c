//
//  main.c
//  CPractice
//
//  Created by Jagdeep Matharu on 2015-02-15.
//  Copyright (c) 2015 Jagdeep Matharu. All rights reserved.
//

#include <stdio.h>


#define NEWLINE = '\n';

int main(int argc, const char * argv[]) {
    #define i = 10;
    
    // Size of Int, long,float, short
        printf("Size of int : %d \n", sizeof(int));
        printf("Size of float : %d \n", sizeof(float));
        printf("\v");
        printf("Size of char : %d \n", sizeof(char));
        printf("\f");
        printf("Size of short : %d \n", sizeof(short));
        printf("%c", NEWLINE);
        printf("Size of long : %d \n", sizeof(long));
    
    return 0;
}
