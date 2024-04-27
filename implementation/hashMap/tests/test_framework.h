/** 
    The following code was based on the testing method given by mercury0114 @ https://stackoverflow.com/a/75441551
    it was first accessed @ 12:42 AM EST 4-27-24
**/
#include <string.h>

#define BEGIN_TESTING int main(int argc, char **argv) {
#define END_TESTING return 0;}
#define TEST(TEST_NAME) if (run_test(TEST_NAME, argc, argv))

int run_test(const char* test_name, int argc, char **argv) {
    // we run every test by default
    if (argc == 1) { return 1; }
    // else we run only the test specified as a command line argument
    for (int i = 1; i < argc; i++) {
        if (!strcmp(test_name, argv[i])) { return 1; }
    } 
    return 0;
}

