#include "hashMap.h"
#include <stdio.h>

int hashKey(int key) {
    if (key >= 0)
        return key % HASHSIZE;
        
    return (key % HASHSIZE) + HASHSIZE;
}

int contains(int key) {
    return 0;
}

int insert(int key, void *value) {
    return 0;
}

int deleteEntry(int key) {
    return 0;
}