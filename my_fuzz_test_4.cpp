#include <assert.h>

#include <cifuzz/cifuzz.h>

FUZZ_TEST_SETUP() {
  // Perform any one-time setup required by the FUZZ_TEST function.
}

FUZZ_TEST(const uint8_t *data, size_t size) {
  // Call the functions you want to test with the provided data and optionally
  // assert that the results are as expected.  
  *(char*)0xdeadbeef = 0;
}
