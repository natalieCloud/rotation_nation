#include "hashMap.h"
#include <stdlib.h>

int hashKey(int key) {
    if (key >= 0)
        return key % HASHSIZE;
        
    return (key % HASHSIZE) + HASHSIZE;
}

int contains(int key) {
    int index = hashKey(key);
    struct hEntry *hPtr;

    if (index < 0) 
        return 0; /* Invalid hash result - ERROR */
    
    for (hPtr = hashTable[index]; hPtr != NULL; hPtr = hPtr->next) {
        if (key == hPtr->key)
            return 1; /* Found, returns true */
    }

    return 0; /* Returns False if not found */
}

void* getValue(int key) {
    int index = hashKey(key);
    struct hEntry *hPtr;

    if (index < 0 || 0 == contains(key))
        return NULL; /* Invalid hash result - ERROR */

    for (hPtr = hashTable[index]; hPtr != NULL; hPtr = hPtr->next) {
        if (key == hPtr->key)
            return hPtr->value; /* Found, returns pointer to value */
    }

    return NULL; /* Returns NULL if not found */
}

int insert(int key, void *value) {
    int index = hashKey(key);
    struct hEntry *hPtr;

    if (index < 0 || contains(key))
        return 0; /* Invalid hash result - ERROR */

    hPtr = (struct hEntry *) malloc(sizeof(*hPtr));
    if (hPtr == NULL || (hPtr->key = key) == 0 || ( hPtr->value = value) == 0)
        return 0;
    hPtr->next = hashTable[index];
    hashTable[index] = hPtr;
    hSize++;
    return 1;
}

int deleteEntry(int key) {
    int index = hashKey(key);
    struct hEntry *hPtr;
    struct hEntry *cPtr;

    if (index < 0 || 0 == contains(key))
        return 0; /* Invalid hash result - ERROR */

    for (hPtr = hashTable[index]; hPtr != NULL; hPtr = hPtr->next) {;
        if (hPtr != NULL && key == hPtr->key) {
            break;
        }     
    }
    for (cPtr = hashTable[index]; cPtr != NULL; cPtr = cPtr->next) {;
        if (cPtr == hashTable[index] && cPtr == hPtr) 
            hashTable[index] = hPtr->next;
        if (cPtr-> next == hPtr)
            cPtr->next == hPtr->next;     
    }

    hSize--;
    free(hPtr);
    return 1;
}

int size() {
    return hSize;
}

void clearHash() {
    int i;
    struct hEntry *hPtr;
    struct hEntry *cPtr;

    for (i = 0; i < HASHSIZE; i++) {
        hPtr = hashTable[i];
        while (hPtr != NULL) {
            cPtr = hPtr;
            hPtr = hPtr->next;
            free(cPtr);
        }
    }
}