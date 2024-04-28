#include <stdio.h>
#include <assert.h>
#include "../hashMap.h"
#include "test_framework.h"

BEGIN_TESTING


/* Tests the hash function w/ 0! */
TEST("TestHash1") {
    int result = hashKey(0);
    assert(0 == result);
}

/* Tests the hash function w/ prime number! */
TEST("TestHash2") {
    int result = hashKey(73);
    assert(36 == result);
}

/* Tests the hash function w/ negative number! */
TEST("TestHash3") {
    int result = hashKey(-5);
    assert(32 == result);
}

/* Tests the contains function, empty table */
TEST("TestContains1") {
    int result = contains(78);
    assert(0 == result);
}

/* Tests contains function, non empty table, contains true */
TEST("TestContains2") {
    int v = 9;
    insert(46, &v);
    assert(1 == contains(46));
}

/* Tests contains function, non empty table, contains false */
TEST("TestContains3") {
    int v = 12;
    insert(46, &v);
    assert(0 == contains(25));
}

/* Tests contains function, non empty table, second entry */
TEST("TestContains4") {
    int v = 13;
    insert(82, &v);
    insert(12, &v);
    insert(8, &v);
    assert(1 == contains(82));
}

/* Test delete function, true single entry*/
TEST("TestDelete1") {
    int result;
    int s = size() - 1;

    result = deleteEntry(8);

    assert(s == size());
    assert(1 == result);
    assert(0 == contains(8));

}

/* Test delete function, false entry non contained */
TEST("TestDelete2") {
    int result;
    int s = size();

    assert(0 == contains(7));

    result = deleteEntry(7);

    assert(s == size());
    assert(0 == result);
    assert(0 == contains(7));
}

/* Test delete function, true multiple entries */
TEST("TestDelete3") {
    int res1, res2;
    int s = size() - 2;

    assert(1 == contains(12) && 1 == contains(46));

    res1 = deleteEntry(12);
    res2 = deleteEntry(46);

    assert(s == size());
    assert(1 == res1 && 1 == res2);
    assert(0 == contains(12) && 0 == contains(46));

}

/* Test delete function, true to empty map */
TEST("TestDelete4") {
    int result;

    assert(1 == size());
    assert(1 == contains(82));

    result = deleteEntry(82);

    assert(1 == result);
    assert(0 == size());
    assert(0 == contains(82));
}

/* Test delete function, false on empty map */
TEST("TestDelete5") {
    int result;

    assert(0 == size());
    assert(0 == contains(3));

    result = deleteEntry(3);

    assert(0 == result);
    assert(0 == size());
    assert(0 == contains(3));
}

/* Test getValue function, false empty map */
TEST("TestGetValue1") {
    void *result = NULL;

    assert(result == NULL);
    assert(0 == size());

    result = getValue(18);

    assert(result == NULL);
    assert(0 == size());
}

/* Test insert function, true to empty map*/
TEST("TestInsert1") {
    int v, result;
    v = 45;

    assert(0 == size());
    assert(0 == contains(13));

    result = insert(13, &v);
    
    assert(1 == result);
    assert(1 == size());
    assert(1 == contains(13));
}

/* Test insert function, true single entry*/
TEST("Testinsert2") {
    int v, result, s;
    v = 78;
    s = size() + 1;

    assert(0 == contains(67));

    result = insert(67, &v);
    
    assert(1 == result);
    assert(s == size());
    assert(1 == contains(67));
}

/* Test insert function, true multiple entries */
TEST("TestInsert3") {
    int v1, v2, v3, r1, r2, r3, s;
    v1 = 3;
    v2 = 90;
    v3 = 15;
    s = size() + 3;

    assert(0 == contains(46));
    assert(0 == contains(2));
    assert(0 == contains(145));

    r1 = insert(46, &v1);
    r2 = insert(2, &v2);
    r3 = insert(145, &v3);
    
    assert(1 == r1 && 1 == r2 && 1 == r3);
    assert(s == size());
    assert(1 == contains(46));
    assert(1 == contains(2));
    assert(1 == contains(145));
}

/* Test insert function, false entry already contained */
TEST("TestInsert4") {
    int v, result, s;
    v = 78;
    s = size();

    assert(1 == contains(46));

    result = insert(46, &v);

    assert(0 == result);
    assert(s = size());
    assert(1 == contains(46));
}

/* Test getValue function, true returns value */
TEST("TestGetValue1") {
    int s = size();
    void *result = NULL;

    assert(result == NULL);

    result = getValue(2);

    assert(*(int *)result == 90);
    assert(s == size());
}

/* Test getValue function, false map does not contain key */
TEST("TestGetValue1") {
    int s = size();
    void *result = NULL;

    assert(result == NULL);

    result = getValue(17);

    assert(result == NULL);
    assert(s == size());
}

clearHash();


END_TESTING