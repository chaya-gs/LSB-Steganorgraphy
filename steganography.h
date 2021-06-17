#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int handle_error(int argc, char **argv);
void encryption(char **argv);
void decryption(char **argv);
void bit_crypting(int enc_val, FILE *fdest, FILE *fsrc, int seekpoint);
void message_crypting(char *buffer, int len, FILE *fdest, FILE *ftxt, FILE *fsrc, int seekpoint);
int extract(FILE *fdest, int seekpoint);
char char_extract(FILE *fdest, int seekpoint);
void decrypt(int buff_size, FILE *fdest, FILE *ftxt, int seekpoint);
