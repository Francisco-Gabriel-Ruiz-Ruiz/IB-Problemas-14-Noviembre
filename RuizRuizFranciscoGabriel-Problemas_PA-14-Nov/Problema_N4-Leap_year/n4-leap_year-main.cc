/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @author Francisco Gabriel Ruiz Ruiz
  * @date Nov 13 2023
  * @brief The program tells if a year is or is not a leap year.
  * @bug There are no known bugs
  * @see Hoja 3 Funciones ULL
  *      (Exercise N4)
  */

#include <iostream>
#include "n4-leap_year.h"

int main(int argc, char* argv[]) {
  if (argc != 2) {
    std::cerr << "Introduzca un solo número tras la ejecución del comando que "
                 "represente un año (separado por un espacio del comando)." <<
                 '\n';
    return 1;
  }
  int user_year{std::atoi(argv[1])};
  PrintLeapYear(user_year);
  return 0;
}
