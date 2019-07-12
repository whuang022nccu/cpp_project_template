
#include <cstdlib>
#include <iostream>
#include "./api/api.hpp"
#include "./third_party_api/csvstream.h"
#include "gtest/gtest.h"
using namespace std;

TEST(SumTest, PositiveNos) {
  double a = 3, b = 4, c = 0;
  c = sum(a, b);
  EXPECT_EQ(7, sum(a, b));
}

TEST(CsvTestm, value) {
  csvstream csvin("../input.csv");
  map<string, string> row;
  string test[3] = {"horse", "chicken", "cat"};
  int i = 0;
  while (csvin >> row) {
    EXPECT_EQ(test[i], row["animal"]);
    i++;
  }
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}