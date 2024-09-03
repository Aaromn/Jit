#include <stdio.h>
#include <string.h>
#include <openssl/sha.h>
#include <stdlib.h>


typedef struct{ // 297 bytes in total
    char file_name[sizeof(char) * 256];
    char hash_code[(SHA_DIGEST_LENGTH * 2) + 1];
} file_info;

typedef struct{ // 12 bytes total
    int num_files; // Number of files
    file_info *files; // malloc'd array of file_info
} direct_info;

// jit_funcs functions
char *sha1_hash(char *file_address);

