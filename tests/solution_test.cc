#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(SwapShould, SwapReturn) {
  Solution solution;
  std::string expected = "TEST";
  solution.SwapCharacters(expected, 1, 0);
  std::string actual = "ETST";
  EXPECT_EQ(expected, actual);
}

TEST(SwapShould_1, SwapReturn_1) {
  Solution solution;
  std::string expected = "TEST";
  solution.SwapCharacters(expected, 0, 100);
  std::string actual = "TEST";
  EXPECT_EQ(expected, actual);
}

TEST(ReverseShould, ReverseReturn) {
  Solution solution;
  std::string expected = "TEST";
  solution.Reversestring(expected);
  std::string actual = "TSET";
  EXPECT_EQ(expected, actual);
}

TEST(ReverseShould_1, ReverseReturn_1) {
  Solution solution;
  std::string expected = "";
  solution.Reversestring(expected);
  std::string actual = "";
  EXPECT_EQ(expected, actual);
}

TEST(LowercaseShould, LowercaseReturn) {
  Solution solution;
  std::string expected = "EE599";
  solution.Tolowerstring(expected);
  std::string actual = "ee599";
  EXPECT_EQ(expected, actual);
}

TEST(LowercaseShould_1, LowercaseReturn_1) {
  Solution solution;
  std::string expected = "ee599";
  solution.Tolowerstring(expected);
  std::string actual = "ee599";
  EXPECT_EQ(expected, actual);
}

TEST(LowercaseShould_2, LowercaseReturn_2) {
  Solution solution;
  std::string expected = "";
  solution.Tolowerstring(expected);
  std::string actual = "";
  EXPECT_EQ(expected, actual);
}

TEST(LowercaseShould_3, LowercaseReturn_3) {
  Solution solution;
  std::string expected = "Ee599@";
  solution.Tolowerstring(expected);
  std::string actual = "ee599@";
  EXPECT_EQ(expected, actual);
}