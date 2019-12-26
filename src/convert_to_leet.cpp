#include "include/convert_to_leet.h"

void convert_to_leet(std::string &line) {
  // Loop through all characters in line
  for (auto &ch : line) {
    // If it's not alpha, skip it
    if (!std::isalpha(ch)) {
      continue;
    }

    // Convert text to 1337
    if (ch == 'l' || ch == 'L') {
      ch = '1';
    } else if (ch == 'e' || ch == 'E') {
      ch = '3';
    } else if (ch == 'a' || ch == 'A') {
      ch = '4';
    } else if (ch == 'o' || ch == 'O') {
      ch = '0';
    } else if (ch == 's' || ch == 'S') {
      ch = '5';
    }
  }

  for (int i = 1; i < line.size(); i++) {
    if (!std::isalpha(line[i])) {
      continue;
    }

    if (!std::isdigit(line[i - 1]) && !std::isupper(line[i - 1]) &&
        !std::isupper(line[i])) {
      line[i] = std::toupper(line[i]);
    }
  }
}
