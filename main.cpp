#include <iostream>
#include <string>

// Controllers
// #include "./controllers/person.cpp"
// #include "./controllers/player.cpp"
// #include "./controllers/collection.cpp"

// Base & Utilities
#include "./utilities/crud.cpp"

int main(int argc, char const *argv[]) {
  std::string msg   = "Type a username: ";
  std::string input = CRUD::create(msg);

  if (StringUtils::isValidUsername(input))
    std::cout << "The username is valid ;)\n";
  else
    std::cout << "The username NOT is valid :|\n";

  return 0;
}
