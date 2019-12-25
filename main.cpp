#include <iostream>
#include <string>

using std::string;


int main(int argc, char *argv[])
{
  if (argc > 1) {
    std::cerr << "Usage: " << argv[0] << std::endl;
    return 1;
  }

  std::cout << "Enter text to be converted into 1337 sp34k:" << std::endl;

  // Read until end-of-file
  string line;
  while (getline(std::cin, line)) {
    // Check the size of line
    if (line.empty()) {
      std::cout << "Enter text: ";
      continue;
    }

    // Loop through all characters in line
    for (auto &ch : line) {
      // If it's not alpha, skip it
      if (!isalpha(ch)) {
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
      if (!isalpha(line[i])) {
        continue;
      }

      if (!isdigit(line[i-1]) && !isupper(line[i-1]) && !isupper(line[i])) {
        line[i] = toupper(line[i]);
      }
    }

    // Print the new 1337 text
    std::cout << "1337 5p34k:\n" << line << std::endl;
  }

  return 0;
}
