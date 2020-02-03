#include "solution.h"
#include <bits/stdc++.h>

void Solution::SwapbyRef(char &input1, char &input2) {
  char temp = input1;
  input1 = input2;
  input2 = temp;
}

void Solution::SwapCharacters(std::string &str, const unsigned int &i, const unsigned int &j) { 
  Solution solution;

  if ((i >= str.length() ) || (j >= str.length()) || (str.length() == 0))
    return;

  solution.SwapbyRef(str.at(i), str.at(j));
}

void Solution::Reversestring(std::string &str) {
  if (str.length() == 0)
    return;
  std::reverse(str.begin(), str.end());
}

void Solution::Tolowerstring(std::string &str) {
  if (str.length() == 0)
    return;

  for (unsigned int i = 0; i < str.length(); i++) {
    str[i] = tolower(str[i]);
  }
}