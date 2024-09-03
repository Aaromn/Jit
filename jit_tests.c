#include "jit_head.h"

test_sha1_hash(){
    char *str;
    str = sha1_hash("/home/haroon/Code/jit/jit_tests.c");

    for (int i = 0; i < 40; i++){
        printf("%c", str[i]);
    }
    printf("\n");
    free(str);
}

int main(){
    test_sha1_hash();
}

