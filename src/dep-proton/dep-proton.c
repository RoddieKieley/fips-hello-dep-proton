#include <stdio.h>

int wrong_new_api_dep_proton(int major, int minor) {
    printf("This is a better implementation of dep-proton (%d.%d)\n", major, minor);
    return 0;
}
