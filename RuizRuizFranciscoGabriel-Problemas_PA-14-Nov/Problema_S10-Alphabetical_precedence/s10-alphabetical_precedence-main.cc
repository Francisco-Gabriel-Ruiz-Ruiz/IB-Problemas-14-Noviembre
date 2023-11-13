/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @author Francisco Gabriel Ruiz Ruiz
  * @date Nov 13 2023
  * @brief The program reads two user sequences and prints which one
  *        'alphabetically' precedes the other.
  * @bug There are no known bugs
  * @see Hoja 3 Funciones ULL
  *      (Exercise S10)
  * @contact alu0101618586@ull.edu.es
  */

#include <iostream>
#include <string>
#include "s10-alphabetical_precedence.h"

int main(int argc, char* argv[]) {
  if (argc != 3) {
    std::cerr << "Introduzca dos secuencias de carácteres separados por un "
                 "espacio tras ejecutar el comando." << '\n';
    return 1;
  }
  std::string first_word{argv[1]};
  std::string second_word{argv[2]};
  PrintWordsWithAlphabeticalPrecedence(first_word, second_word);
  return 0;
}
