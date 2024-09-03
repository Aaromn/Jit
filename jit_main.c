#include "jit_head.h"

void help(){
    printf("This is a placeholder for the help function \n");
}
void commit() { printf("This is a placeholder for the commit function \n");}  
void init(){ printf("This is the placeholder function for init\n");}
void error(char *err_str){ printf("The following command is not a valid input: %s \n", err_str);}

int main(int argc, char *argv[]) {

    if (argc < 2) {
        printf("No argument was provided: %s \n", argv[0]);
        return 1;
    }

    // Loop through and print each argument
    // Test code
    printf("Number of arguments: %d\n", argc - 1);
    for (int i = 1; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }

    char *first_arg = argv[1];
    if (0){}
    else if( strcmp( first_arg, "help" )==0 ){help();}
    else if( strcmp( first_arg, "commit" )==0 ){commit();}
    else if( strcmp( first_arg, "init" )==0 ){init();}
    else{ error(first_arg);}
    return 0;
}
