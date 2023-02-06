#include <iostream>
#include <string>

// Controllers
// #include "./controllers/person.cpp"
// #include "./controllers/player.cpp"
// #include "./controllers/collection.cpp"

// Base & Utilities
#include "./utilities/crud.cpp"

int main(int argc, char const *argv[]) {
  std::string msg   = "Type a number: ";
  std::string input = CRUD::create(msg);

  if (StringUtils::isValidIntNumber(input)) {
    int number = StringUtils::toInt(input);

    std::cout << "The number is valid ;)\n";
    std::cout << "\nMultiplication table of " << number << ":\n\n";

    for (unsigned short index = 1; index <= 10; index++) {
      std::cout << number << " x "  << index << " = ";
      std::cout << (number * index) << "\n";
    }
  } else
    std::cout << "The number NOT is valid :|\n";

  return 0;
}
