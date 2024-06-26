#define HASHSIZE 37 /* I just've always really liked the number 37 - lucky me it turned out to be prime! */

/**
    The following code is based on the implementation of a hashTable as described in
    "The C Programming Language" by Kernighan and Ritche.
    Any modifications I have made have been to make the implementation suited to my 
    needs in the BST portion of this project.
    - Natalie Chmura
**/

struct hEntry {  /* Hash table entries */
    struct hEntry *next;
    int key;
    void *value;
};

static struct hEntry *hashTable[HASHSIZE]; /* Hash Table */

static int hSize = 0; /* Number of entries in the map */

int hashKey(int key); /* Hashes the key to the appropriate bucket. Simple mod based hash. returns bucket number, -1 if invalid. */

int contains(int key); /* Checks to see if the key requested is contained within the hash map. returns an int if so. */

void* getValue(int key); /* Searches the table for the entry defined by the key, and returns a pointer to its value. */

int insert(int key, void *value); /* Inserts the hash entry to the appropriate bucket. Returns int sucess. Does not allow duplicates */

int deleteEntry(int key); /* Deletes the hash entry from the table. Returns an int indicating sucess. */

int size(); /* returns the number of elements in the hashMap */

void clearHash(); /* Clears and frees any memeory the table has allocated. Returns a boolean sucess */

