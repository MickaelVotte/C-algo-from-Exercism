#include "rna_transcription.h"
#include <string.h>
#include <stdlib.h>

char *to_rna(const char *dna){
    int length = strlen(dna);
    char *rna = malloc(length + 1);

    if(rna == NULL){
        return NULL;
    }

    for(int i = 0; i < length; i++){
        switch(dna[i]){
            case 'G':
                rna[i] = 'C';
                break;
            case 'C':
                rna[i] = 'G';
                break;
            case 'T':
                rna[i] = 'A';
                break;
            case 'A':
                rna[i] = 'U';
                break;
            default:
                 rna[i] = dna[i];
                break;
        }
    }
    rna[length] = '\0';
    return rna;
}