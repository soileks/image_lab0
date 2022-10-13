#include <gtest.h>
#include"Mylib.h"
#include"test_add.h"

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
