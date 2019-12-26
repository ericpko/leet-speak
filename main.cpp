#include <iostream>
#include <string>

#include "convert_to_leet.h"

int main(int argc, char *argv[]) {
  if (argc > 1) {
    std::cerr << "Usage: " << argv[0] << std::endl;
    return 1;
  }

  std::cout << "Welcome to 1337 5p34k where you can translate any sentence.\n";
  std::cout << "Enter some text or type quit to terminate." << std::endl;

  // Read until end-of-file
  std::string line;
  while (std::getline(std::cin, line)) {
    // Check if they typed quit
    if (line == "quit") {
      std::cout << "Exiting program successfully." << std::endl;
      break;
    }

    // Check the size of line
    if (line.empty()) {
      std::cout << "Nothing entered. Try again or type quit to terminate."
                << std::endl;
      continue;
    }

    convert_to_leet(line);

    // Print the new 1337 text
    std::cout << "\nTranslation:\n" << line << std::endl;

    // Reprompt message
    std::cout << "\nConvert new sentence or type quit to terminate."
              << std::endl;
  }

  return 0;
}
