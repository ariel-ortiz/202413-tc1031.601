#include <stdexcept>
#include "catch.h"
#include "intlist.h"
#include "recursion.h"

TEST_CASE("test the recursive functions")
{
    SECTION("test size") {
        REQUIRE(0 == size(IntList {}));
        REQUIRE(1 == size(IntList {5}));
        REQUIRE(4 == size(IntList {5, 6, 7, 8}));
        REQUIRE(10 == size(IntList {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}));
    }

    SECTION("test cons_end") {
        REQUIRE(IntList {5} == cons_end(5, IntList {}));
        REQUIRE(IntList {7, 2, 10}
            == cons_end(10, IntList {7, 2}));
        REQUIRE(IntList {1, 2, 3, 4, 5}
            == cons_end(5, IntList {1, 2, 3, 4}));
        REQUIRE(IntList {22, 2, 20, 3, 9, 6, 14, 23, 24, 10, 5, 28,
            11, 29, 13, 12, 17, 21, 1, 19, 16, 25, 0, 15, 4, 7, 27,
            18, 26, 8, 99}
            == cons_end(99, IntList {22, 2, 20, 3, 9, 6, 14, 23, 24,
            10, 5, 28, 11, 29, 13, 12, 17, 21, 1, 19, 16, 25, 0, 15,
            4, 7, 27, 18, 26, 8}));
    }

    SECTION("test sum") {
        REQUIRE(0 == sum(IntList {}));
        REQUIRE(5 == sum(IntList {5}));
        REQUIRE(15 == sum(IntList {1, 2, 3, 4, 5}));
        REQUIRE(5050 == sum(IntList {94, 89, 80, 8, 45, 93, 10, 13,
            16, 79, 7, 65, 32, 17, 34, 41, 98, 63, 43, 5, 88, 30, 22,
            35, 42, 75, 69, 81, 21, 96, 51, 100, 46, 36, 48, 54, 24,
            11, 59, 27, 90, 55, 20, 62, 95, 6, 77, 33, 82, 9, 74, 99,
            72, 53, 71, 2, 73, 23, 52, 68, 29, 76, 64, 50, 15, 39, 40,
            58, 78, 38, 26, 84, 92, 37, 57, 25, 3, 49, 44, 56, 83, 18,
            87, 31, 14, 97, 86, 67, 12, 28, 70, 66, 61, 1, 47, 4, 60,
            85, 19, 91}));
    }

    SECTION("test duplicate") {
        REQUIRE(IntList {} == duplicate(IntList {}));
        REQUIRE(IntList {5, 5} == duplicate(IntList {5}));
        REQUIRE(IntList {7, 7, 2, 2, 5, 5}
            == duplicate(IntList {7, 2, 5}));
        REQUIRE(IntList {1, 1, 13, 13, 16, 16, 0, 0, 18, 18, 11, 11,
            4, 4, 17, 17, 3, 3, 2, 2, 6, 6, 9, 9, 7, 7, 19, 19,
            12, 12, 10, 10, 5, 5, 15, 15, 8, 8, 14, 14}
            == duplicate(IntList {1, 13, 16, 0, 18, 11, 4, 17, 3, 2,
            6, 9, 7, 19, 12, 10, 5, 15, 8, 14}));
    }

    SECTION("test last") {
        REQUIRE(5 == last(IntList {5}));
        REQUIRE(2 == last(IntList {5, 2}));
        REQUIRE(4 == last(IntList {5, 1, 8, 2, 4}));
        REQUIRE(14 == last(IntList {1, 13, 16, 0, 18, 11, 4, 17, 3, 2,
            6, 9, 7, 19, 12, 10, 5, 15, 8, 14}));
    }

    // SECTION("test but_last") {
    //     REQUIRE(IntList {} == but_last(IntList {5}));
    //     REQUIRE(IntList {5} == but_last(IntList {5, 2}));
    //     REQUIRE(IntList {5, 1, 8, 2}
    //         == but_last(IntList {5, 1, 8, 2, 4}));
    //     REQUIRE(IntList {1, 13, 16, 0, 18, 11, 4, 17, 3, 2, 6, 9, 7,
    //         19, 12, 10, 5, 15, 8}
    //         == but_last(IntList {1, 13, 16, 0, 18, 11, 4, 17, 3, 2, 6,
    //             9, 7, 19, 12, 10, 5, 15, 8, 14}));
    // }

    // SECTION("test maximum") {
    //     REQUIRE(5 == maximum(IntList {5}));
    //     REQUIRE(-1 == maximum(IntList {-3, -7, -1, -10}));
    //     REQUIRE(42 == maximum(IntList {42, 42, 42, 42, 42, 42, 42, 42,
    //         42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42}));
    //     REQUIRE(100 == maximum(IntList {94, 89, 80, 8, 45, 93, 10, 13,
    //         16, 79, 7, 65, 32, 17, 34, 41, 98, 63, 43, 5, 88, 30, 22,
    //         35, 42, 75, 69, 81, 21, 96, 51, 100, 46, 36, 48, 54, 24,
    //         11, 59, 27, 90, 55, 20, 62, 95, 6, 77, 33, 82, 9, 74, 99,
    //         72, 53, 71, 2, 73, 23, 52, 68, 29, 76, 64, 50, 15, 39, 40,
    //         58, 78, 38, 26, 84, 92, 37, 57, 25, 3, 49, 44, 56, 83, 18,
    //         87, 31, 14, 97, 86, 67, 12, 28, 70, 66, 61, 1, 47, 4, 60,
    //         85, 19, 91}));
    // }

    // SECTION("test append") {
    //     REQUIRE(IntList {} == append(IntList {}, IntList {}));
    //     REQUIRE(IntList {1, 2, 3, 4, 5}
    //         == append(IntList {}, IntList {1, 2, 3, 4, 5}));
    //     REQUIRE(IntList {1, 2, 3, 4, 5}
    //         == append(IntList {1, 2, 3, 4, 5}, IntList {}));
    //     REQUIRE(IntList {1, 3, 4, 6, 0, 8, 19, 5, 12, 11, 16, 14, 2,
    //         7, 9, 17, 15, 10, 13, 18, 16, 7, 1, 10, 14, 12, 5, 2, 8,
    //         3, 20, 0, 4, 13, 22, 17, 26, 21, 23, 27, 9, 18, 29, 11,
    //         19, 15, 6, 28, 24, 25}
    //         == append(
    //             IntList {1, 3, 4, 6, 0, 8, 19, 5, 12, 11, 16, 14, 2,
    //             7, 9, 17, 15, 10, 13, 18},
    //             IntList {16, 7, 1, 10, 14, 12, 5, 2, 8, 3, 20, 0, 4,
    //             13, 22, 17, 26, 21, 23, 27, 9, 18, 29, 11, 19, 15, 6,
    //             28, 24, 25}));
    // }

    // SECTION("test repeat") {
    //     REQUIRE(IntList {} == repeat(0, 5));
    //     REQUIRE(IntList {7} == repeat(1, 7));
    //     REQUIRE(IntList {10, 10, 10, 10, 10} == repeat(5, 10));
    //     REQUIRE(IntList {42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42,
    //         42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42,
    //         42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42,
    //         42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42,
    //         42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42,
    //         42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42,
    //         42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42,
    //         42, 42, 42, 42, 42}
    //         == repeat(100, 42));
    // }

    // SECTION("test reverse") {
    //     REQUIRE(IntList {} == reverse(IntList {}));
    //     REQUIRE(IntList {5} == reverse(IntList {5}));
    //     REQUIRE(IntList {7, 2, 8, 1, 5}
    //         == reverse(IntList {5, 1, 8, 2, 7}));
    //     REQUIRE(IntList {75, 1, 76, 83, 52, 55, 18, 49, 84, 72, 60,
    //         65, 56, 58, 30, 67, 27, 80, 53, 54, 37, 44, 47, 21, 10,
    //         69, 28, 22, 57, 78, 77, 24, 33, 70, 92, 45, 3, 20, 42, 93,
    //         6, 97, 85, 29, 59, 31, 95, 87, 66, 2, 71, 15, 12, 81, 88,
    //         5, 40, 74, 89, 7, 16, 98, 36, 94, 73, 19, 99, 86, 38, 63,
    //         4, 41, 43, 48, 25, 62, 64, 91, 23, 82, 26, 17, 50, 14, 32,
    //         51, 35, 90, 96, 61, 46, 39, 13, 0, 11, 68, 9, 8, 79, 34}
    //         == reverse(IntList {34, 79, 8, 9, 68, 11, 0, 13, 39, 46,
    //             61, 96, 90, 35, 51, 32, 14, 50, 17, 26, 82, 23, 91,
    //             64, 62, 25, 48, 43, 41, 4, 63, 38, 86, 99, 19, 73, 94,
    //             36, 98, 16, 7, 89, 74, 40, 5, 88, 81, 12, 15, 71, 2,
    //             66, 87, 95, 31, 59, 29, 85, 97, 6, 93, 42, 20, 3, 45,
    //             92, 70, 33, 24, 77, 78, 57, 22, 28, 69, 10, 21, 47,
    //             44, 37, 54, 53, 80, 27, 67, 30, 58, 56, 65, 60, 72,
    //             84, 49, 18, 55, 52, 83, 76, 1, 75}));
    // }

    SECTION("test merge") {
        REQUIRE(IntList {} == merge(IntList {}, IntList {}));
        REQUIRE(IntList {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
            == merge(
                IntList {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
                IntList {}));
        REQUIRE(IntList {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
            == merge(
                IntList {},
                IntList {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}));
        REQUIRE(IntList {1, 2, 2, 4, 5, 6, 6, 7, 8, 9, 10, 10, 11,
            12, 12, 13, 14, 15, 18, 19, 20, 21, 22, 26, 27, 29, 29,
            31, 32, 32, 33, 34, 34, 35, 36, 37, 38, 39, 40, 42, 42,
            43, 44, 45, 46, 47, 48, 48, 49, 50, 51, 51, 52, 53, 54,
            54, 55, 55, 56, 56, 59, 59, 60, 61, 63, 65, 66, 69, 70,
            70, 71, 73, 73, 74, 74, 75, 76, 77, 78, 79, 79, 80, 80,
            81, 82, 83, 84, 85, 86, 88, 89, 90, 92, 93, 94, 95, 97,
            97, 98, 98, 98, 99}
            == merge(
                IntList {2, 5, 6, 10, 12, 21, 22, 26, 29, 32, 34, 35,
                39, 40, 42, 44, 45, 48, 51, 53, 54, 55, 56, 59, 61,
                63, 70, 73, 74, 75, 76, 78, 79, 80, 81, 85, 86, 89,
                93, 97},
                IntList {1, 2, 4, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15,
                18, 19, 20, 27, 29, 31, 32, 33, 34, 36, 37, 38, 42,
                43, 46, 47, 48, 49, 50, 51, 52, 54, 55, 56, 59, 60,
                65, 66, 69, 70, 71, 73, 74, 77, 79, 80, 82, 83, 84,
                88, 90, 92, 94, 95, 97, 98, 98, 98, 99}));
    }

    // SECTION("test is_prefix") {
    //      REQUIRE(is_prefix(IntList {}, IntList {}));
    //      REQUIRE(is_prefix(IntList {}, IntList {1, 2, 3, 4, 5}));
    //      REQUIRE_FALSE(is_prefix(
    //         IntList {1, 2, 3, 4, 5},
    //         IntList {}));
    //      REQUIRE(is_prefix(
    //         IntList {1, 2, 3, 4, 5},
    //         IntList {1, 2, 3, 4, 5}));
    //      REQUIRE(is_prefix(
    //         IntList {57, 92, 19, 1, 23, 70, 83, 26, 29, 31, 93, 59,
    //         34, 52, 58, 84, 87, 68, 7, 36, 81, 18, 91, 89, 10, 96, 8,
    //         50, 39, 80, 75, 63, 30, 3, 40, 69, 51, 14, 46, 97, 49, 85,
    //         15, 56, 71, 20, 55, 6, 74, 28, 45, 48, 60, 72, 9, 66, 12,
    //         86, 24, 25, 67, 79, 32, 61, 41, 4, 47, 17, 22},
    //         IntList {57, 92, 19, 1, 23, 70, 83, 26, 29, 31, 93, 59,
    //         34, 52, 58, 84, 87, 68, 7, 36, 81, 18, 91, 89, 10, 96, 8,
    //         50, 39, 80, 75, 63, 30, 3, 40, 69, 51, 14, 46, 97, 49, 85,
    //         15, 56, 71, 20, 55, 6, 74, 28, 45, 48, 60, 72, 9, 66, 12,
    //         86, 24, 25, 67, 79, 32, 61, 41, 4, 47, 17, 22, 94, 13, 90,
    //         35, 98, 44, 82, 77, 33, 5, 11, 78, 27, 0, 62, 64, 42, 16,
    //         54, 43, 95, 73, 65, 99, 2, 21, 37, 76, 53, 88, 38}));
    //     REQUIRE_FALSE(is_prefix(
    //         IntList {57, 92, 19, 1, 23, 70, 83, 26, 29, 31, 93, 59,
    //         34, 52, 58, 84, 87, 68, 7, 36, 81, 18, 91, 89, 10, 96, 8,
    //         50, 39, 80, 75, 63, 30, 3, 40, 69, 51, 14, 46, 97, 49, 85,
    //         15, 56, 71, 20, 55, 6, 74, 28, 45, 48, 60, 72, 9, 66, 12,
    //         86, 24, 25, 67, 79, 32, 61, 41, 4, 47, 17, 23},
    //         IntList {57, 92, 19, 1, 23, 70, 83, 26, 29, 31, 93, 59,
    //         34, 52, 58, 84, 87, 68, 7, 36, 81, 18, 91, 89, 10, 96, 8,
    //         50, 39, 80, 75, 63, 30, 3, 40, 69, 51, 14, 46, 97, 49, 85,
    //         15, 56, 71, 20, 55, 6, 74, 28, 45, 48, 60, 72, 9, 66, 12,
    //         86, 24, 25, 67, 79, 32, 61, 41, 4, 47, 17, 22, 94, 13, 90,
    //         35, 98, 44, 82, 77, 33, 5, 11, 78, 27, 0, 62, 64, 42, 16,
    //         54, 43, 95, 73, 65, 99, 2, 21, 37, 76, 53, 88, 38}));
    // }

    // SECTION("test insert") {
    //     REQUIRE(IntList {5} == insert(5, IntList {}));
    //     REQUIRE(IntList {5, 7} == insert(5, IntList {7}));
    //     REQUIRE(IntList {9, 10, 11, 12, 13, 14, 15}
    //         == insert(9, IntList {10, 11, 12, 13, 14, 15}));
    //     REQUIRE(IntList {10, 11, 12, 13, 14, 15, 16}
    //         == insert(16, IntList {10, 11, 12, 13, 14, 15}));
    //     REQUIRE(IntList {0, 3, 4, 5, 6, 9, 10, 11, 12, 13, 14, 16,
    //         19, 20, 21, 22, 23, 24, 25, 28, 29, 30, 32, 34, 35, 36,
    //         38, 40, 42, 45, 47, 48, 49, 60, 67, 69, 70, 72, 74, 75,
    //         76, 79, 82, 83, 85, 86, 88, 89, 90, 97, 99}
    //         == insert(42, IntList {0, 3, 4, 5, 6, 9, 10, 11, 12, 13,
    //             14, 16, 19, 20, 21, 22, 23, 24, 25, 28, 29, 30, 32,
    //             34, 35, 36, 38, 40, 45, 47, 48, 49, 60, 67, 69, 70,
    //             72, 74, 75, 76, 79, 82, 83, 85, 86, 88, 89, 90, 97,
    //             99}));
    //     REQUIRE(IntList {1, 2, 9, 11, 12, 19, 25, 25, 25, 27, 32, 33,
    //         36, 36, 37, 37, 37, 37, 42, 44, 47, 49, 51, 51, 52, 53,
    //         54, 54, 57, 59, 64, 69, 69, 70, 71, 74, 75, 79, 80, 81,
    //         84, 85, 86, 87, 88, 94, 96, 96, 97, 97, 99}
    //         == insert(37, IntList {1, 2, 9, 11, 12, 19, 25, 25, 25,
    //             27, 32, 33, 36, 36, 37, 37, 37, 42, 44, 47, 49, 51,
    //             51, 52, 53, 54, 54, 57, 59, 64, 69, 69, 70, 71, 74,
    //             75, 79, 80, 81, 84, 85, 86, 87, 88, 94, 96, 96, 97,
    //             97, 99}));
    // }

    // SECTION("test insertion_sort") {
    //     REQUIRE(IntList {} == insertion_sort(IntList {}));
    //     REQUIRE(IntList {5} == insertion_sort(IntList {5}));
    //     REQUIRE(IntList {4, 25, 34, 57, 60}
    //         == insertion_sort(IntList {34, 60, 57, 25, 4}));
    //     REQUIRE(IntList {0, 1, 1, 2, 3, 3, 3, 5, 6, 8, 8, 8, 9, 9,
    //         11, 13, 15, 15, 15, 17, 17, 19, 19, 19, 22, 22, 22, 23,
    //         26, 27, 28, 28, 32, 34, 34, 36, 38, 38, 39, 40, 42, 43,
    //         44, 45, 46, 46, 47, 51, 52, 52, 54, 54, 56, 56, 58, 60,
    //         60, 61, 61, 62, 62, 63, 63, 64, 65, 65, 67, 67, 68, 69,
    //         70, 70, 71, 73, 73, 74, 74, 76, 76, 77, 77, 78, 80, 80,
    //         83, 84, 84, 85, 87, 87, 88, 89, 89, 89, 90, 90, 93, 97,
    //         98, 99}
    //         == insertion_sort(IntList {1, 80, 38, 54, 8, 36, 99, 56,
    //             19, 87, 42, 45, 65, 84, 5, 46, 78, 52, 28, 76, 47, 44,
    //             40, 93, 89, 74, 6, 8, 8, 84, 89, 98, 38, 89, 88, 74,
    //             67, 70, 52, 19, 15, 83, 9, 64, 73, 51, 2, 46, 70, 27,
    //             90, 56, 22, 67, 61, 9, 43, 68, 77, 1, 34, 76, 73, 85,
    //             80, 77, 62, 15, 19, 15, 17, 97, 17, 13, 60, 54, 3, 11,
    //             39, 28, 3, 71, 61, 87, 58, 32, 65, 23, 22, 90, 26, 69,
    //             22, 3, 0, 34, 63, 63, 62, 60}));
    // }

    SECTION("test binary") {
        REQUIRE(IntList {} == binary(0));
        REQUIRE(IntList {1} == binary(1));
        REQUIRE(IntList {1, 0, 1, 0, 1, 0} == binary(42));
        REQUIRE(IntList {1, 0, 1, 0, 0, 1, 1, 0, 1, 0}
            == binary(666));
        REQUIRE(IntList {1, 0, 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0,
            0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 1, 0, 0, 1, 0}
            == binary(1234567890));
        REQUIRE(IntList {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
            1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
            == binary(2147483647));
    }
}
