#include <cstring>

void swap(char* a, char* b, int length) {
    char* tmp = new char[length];
    memcpy(a, tmp, length);
    memcpy(b, a, length);
    memcpy(tmp, b, length);
    delete(tmp);
}
