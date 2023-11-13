/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @author Francisco Gabriel Ruiz Ruiz
  * @date Nov 13 2023
  * @brief The main program reads a sequence of characters and prints a
  *        modified sequence with the same string but with the characters one
  *        position ahead, one behind and one with no characters changed but
  *        with a hyphen in between each one.
  * @bug There are no known bugs
  * @see Hoja 3 Funciones ULL
  *      (Exercise S9)
  * @contact alu0101618586@ull.edu.es
  */

#include <iostream>
#include <string>
#include "s9-ascii_modifications.h"

/**
  * @brief The function converts the user's original string into a new string
  *        that is composed of the same characters but with one position
  *        ahead in the ASCII table.
  * @param user_string The user's original string.
  * @return The function returns the converted string.
  */
std::string CalculateOneMoreString(const std::string& user_string) {
  std::string converted_string;
  for (char extracted_character : user_string) {
    int ascii_code{static_cast<int>(extracted_character)};
    ++ascii_code;
    char new_character{static_cast<char>(ascii_code)};
    converted_string += new_character;
  }
  return converted_string;
}

/**
  * @brief The function converts the user's original string into a new string
  *        that is composed of the same characters but with one position
  *        behind in the ASCII table.
  * @param user_string The user's original string.
  * @return The function returns the converted string.
  */
std::string CalculateOneLessString(const std::string& user_string) {
  std::string converted_string;
  for (char extracted_character : user_string) {
    int ascii_code{static_cast<int>(extracted_character)};
    --ascii_code;
    char new_character{static_cast<char>(ascii_code)};
    converted_string += new_character;
  }
  return converted_string;
}

/** @brief The function prints the string that has all characters one position
  *        ahead the original string.
  * @param The converted string that is printed.
  */
void PrintOneMoreString(const std::string& one_more_string) {
  std::cout << "Cadena de carácteres posicionados +1 en su código ascii: " <<
  '\n' << one_more_string << '\n';
}

/** @brief The function prints the string that has all characters one position
  *        behind the original string.
  * @param The converted string that is printed.
  */
void PrintOneLessString(std::string one_less_string) {
  std::cout << "Cadena de carácteres posicionados -1 en su código ascii: " <<
  '\n' << one_less_string << '\n';
}

/** @brief The function prints the original user string but with all characters
  *        separated by a hyphen.
  * @param The original user string.
  */
void PrintFragmentedOriginalString(std::string user_string) {
  std::cout << "Cadena de carácteres original fragmentada por guiones: " <<
  '\n';
  int pos_counter{0};
  for (char extracted_character : user_string) {
    std::cout << extracted_character;
    if (pos_counter + 1 != user_string.size()) {
      std::cout << "-";
    }
    ++pos_counter;
  }
  std::cout << '\n';
}
