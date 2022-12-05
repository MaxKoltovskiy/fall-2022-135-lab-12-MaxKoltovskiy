#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("Make Vector"){
    std::vector<int> correct{0,1,2,3,4,5};
    CHECK(makeVector(6) == correct);
}
TEST_CASE("Positives"){
    std::vector<int> all{1,2,-1,3,4,-1,6};
    std::vector<int> correct{1,2,3,4,6};
    CHECK(goodVibes(all) == correct);
}
TEST_CASE("Combined vectors"){
    std::vector<int> v1{1,2,3,4};
    std::vector<int> v2{5,6,7};
    gogeta(v1,v2);
    CHECK(v1 == std::vector<int>{1,2,3,4,5,6,7});
}