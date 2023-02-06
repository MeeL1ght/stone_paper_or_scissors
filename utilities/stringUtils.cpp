#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
#include <iomanip>
#include <cctype>

/**
  @brief Valida si la letra a recibir
  coincide con las no permitidas del
  arreglo de caracteres.

  @param letter const char
  @return bool
*/
bool isNumber(const char letter) {
  const char NON_NUMERIC_CHARACTERS[59] = {
    // letters
    'a', 'b', 'c', 'd', 'e',    'f',
    'e', 'f', 'g', 'h', 'i',    'j',
    'k', 'l', 'm', 'n', '\xa4', '\xa5',
    'o', 'p', 'q', 'r', 's',    't',
    'u', 'v', 'w', 'x', 'y',    'z',
    // special characters
    '.', ',',  '-', '{', '}', '[',
    ']', '+',  '*', '/', '|', '!',
    '"', '\'', '#', '$', '%', '\\',
    '(', ')',  '=', '?', ' ', ';',
    ':', '_',  '<', '>', '^'
  };

  unsigned short index = 0;

  for (const char invalidLetter : NON_NUMERIC_CHARACTERS) {
    if (
      index <= 29 &&
      letter == ::toupper(invalidLetter)
    ) {
      return false;
    }

    if (letter == invalidLetter) return false;

    index++;
  }

  return true;
}

/**
  @namespace StringUtils

  @brief Conjunto de utilidades para
  manipular valores del tipo de dato
  std::string.
*/
namespace StringUtils {
  /**
    @brief Convierte el valor de tipo
    std::string a int.

    @param input std::string
    @return int
  */
  int toInt(std::string input) {
    int number = std::stoi(input);

    return number;
  }

  /**
    @brief Convierte el valor de tipo
    std::string a bool.

    @param word std::string
    @return bool
  */
  bool toBool(std::string word) {
    std::transform(
      word.begin(),
      word.end(),
      word.begin(),
      ::tolower
    );

    bool flag;
    std::istringstream is(word);

    is >> std::boolalpha >> flag;

    return flag;
  }

  /**
    @brief Convierte todo el valor de tipo
    std::string a minúscula.

    @param input std::string
    @return std::string
  */
  std::string toLowerCase(std::string input) {
    char newInput[input.size()];
    unsigned int index = -1;

    while (++index < input.size()) {
      char character = input[index];

      newInput[index] = ::tolower(character);
    }

    return newInput;
  }

  /**
    @brief Convierte todo el valor de tipo
    std::string a mayúscula.

    @param input std::string
    @return std::string
  */
  std::string toUpperCase(std::string input) {
    char newInput[input.size()];
    unsigned int index = -1;

    while (++index < input.size()) {
      char character = input[index];

      newInput[index] = ::toupper(character);
    }

    return newInput;
  }

  /**
    @brief Determina si el valor ingresado
    de la entrada es un número entero válido.

    @param input std::string
    @return bool
  */
  bool isValidIntNumber(std::string input) {
    const unsigned short LENGTH_OF_INPUT = input.size();
    const unsigned int   MAX_VALUE       = 9;

    if (LENGTH_OF_INPUT == 0)             return false;
    else if (LENGTH_OF_INPUT > MAX_VALUE) return false;

    for (const char letter : input)
      if (!isNumber(letter)) return false;

    return true;
  }
};
