#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

TEST_CASE("Vector of strings are glued together", "[join]") {
    REQUIRE(Join(std::vector<std::string>{"No", "Josei"}, "Way") == "NoWayJosei");
    REQUIRE(Join(std::vector<std::string>{"1", "2", "3"}, ",") == "1,2,3");
    REQUIRE(Join(std::vector<std::string>{"Hello", "World!"}, ", ") == "Hello, World!");
}

TEST_CASE("Even numbers are masked properly", "[evenMask]") {
    REQUIRE(EvenMask(std::vector<int>{1,2,3,4,5}) == std::vector<bool>{false,true,false,true,false});
    REQUIRE(EvenMask(std::vector<int>{2,4,6,8}) == std::vector<bool>{true,true,true,true});
    REQUIRE(EvenMask(std::vector<int>{12,13,14,20,21,22}) == std::vector<bool>{true,false,true,true,false,true});
}

TEST_CASE("Odd numbers are masked properly", "[evenMask]") {
    REQUIRE(OddMask(std::vector<int>{1,2,3,4,5}) == std::vector<bool>{true,false,true,false,true});
    REQUIRE(OddMask(std::vector<int>{2,4,6,8}) == std::vector<bool>{false,false,false,false});
    REQUIRE(OddMask(std::vector<int>{12,13,14,20,21,22}) == std::vector<bool>{false,true,false,false,true,false});
}

TEST_CASE("Sum of every vector entry is computed", "[sum]") {
    REQUIRE(Sum(std::vector<int>{1,2,3}) == 6);
    REQUIRE(Sum(std::vector<int>{11,21}) == 32);
    REQUIRE(Sum(std::vector<int>{}) == 0);
}

TEST_CASE("Product of every vector entry is computed", "[product]") {
    REQUIRE(Product(std::vector<int>{-1,2}) == -2);
    REQUIRE(Product(std::vector<int>{3,8,10}) == 240);
    REQUIRE(Product(std::vector<int>{}) == 0);
}