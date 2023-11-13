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

int main(int argc, char* argv[]) {
  if (argc != 2) {
    std::cerr << "Introduzca una sola cadena de carácteres tras ejecutar "
                 "el programa." << '\n';
    return 1;
  }
  std::string user_string{argv[1]};
  std::string one_more_string{CalculateOneMoreString(user_string)};
  std::string one_less_string{CalculateOneLessString(user_string)};
  PrintOneMoreString(one_more_string);
  PrintOneLessString(one_less_string);
  PrintFragmentedOriginalString(user_string);
  return 0;
}
