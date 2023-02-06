#include <iostream>
#include <string>
#include "stringUtils.cpp"

/**
  @namespace CRUD

  @brief Conjunto de utilidades para crear,
  ver, actualizar y eliminar algún dato.
*/
namespace CRUD {
  /**
    @brief Crea, lée con el respectivo mensaje
    que recibe como argumento y retorna una
    entrada de tipo std::string.

    @param msg std::string
    @return std::string
  */
  std::string create(std::string msg) {
    std::string input = "";

    std::cout << msg;
    std::getline(std::cin, input);

    return input;
  }

  /**
    @brief Crea y retorna una entrada de tipo int.
    @param msg std::string
    @return int
  */
  int createInt(std::string msg) {
    std::string input = CRUD::create(msg);
    int number        = StringUtils::toInt(input);

    return number;
  }
}
