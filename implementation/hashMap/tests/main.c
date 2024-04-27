#include <stdio.h>
#include <assert.h>
#include "../hashMap.h"
#include "test_framework.h"

BEGIN_TESTING


// Tests the hash function w/ 0!
TEST("TestHash1") {
    int result = hashKey(0);
    assert(0 == result);
}

// Tests the hash function w/ prime number!
TEST("TestHash2") {
    int result = hashKey(73);
    assert(36 == result);
}

// Tests the hash function w/ negative number!
TEST("TestHash3") {
    int result = hashKey(-5);
    assert(32 == result);
}


END_TESTING