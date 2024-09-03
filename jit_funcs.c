#include "jit_head.h"

char *sha1_hash(char *file_address){
    FILE *file = fopen(file_address, "rb");
    if(!file) return 1;

    SHA_CTX sha1;
    unsigned char hash[SHA_DIGEST_LENGTH];
    unsigned char buffer[8192];
    int bytesRead = 0;

    SHA1_Init(&sha1);
    while((bytesRead = fread(buffer, 1, sizeof(buffer), file))) {
        SHA1_Update(&sha1, buffer, bytesRead);
    }
    SHA1_Final(hash, &sha1);

    fclose(file);

    for(int i = 0; i < SHA_DIGEST_LENGTH; i++) {
        printf("%02x", hash[i]);
    }
    printf("\n");

    char *fin_str = (char *) malloc((SHA_DIGEST_LENGTH * 2) + 1);

    for(int i = 0; i < SHA_DIGEST_LENGTH; i++) {
        int first = hash[i] / 16;
        int second = hash[i] % 16;

        if (first < 10)
            fin_str[i * 2] = '0' + first;
        else
            fin_str[i * 2] = 'a' + first - 10;
        
        if (second < 10)
            fin_str[(i * 2) + 1] = '0' + second;
        else
            fin_str[(i * 2) + 1] = 'a' + second - 10;
    }
    fin_str[40] = '\0';
    return fin_str;
}

// goes through each file in a directory creating a hash code for each one of them. 
direct_info *collect_direct_hashes(char *direct_address){
    
}

