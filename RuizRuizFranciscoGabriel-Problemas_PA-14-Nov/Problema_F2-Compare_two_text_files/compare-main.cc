/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @author Francisco Gabriel Ruiz Ruiz
  * @date Nov 13 2023
  * @brief The program reads two text files and prints the lines where these
  *        text files differ from each other.
  * @bug There are no known bugs
  * @see Hoja 3 Funciones ULL
  *      (Exercise F2)
  * @contact alu0101618586@ull.edu.es
  */

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "compare.h"

int main(int argc, char* argv[]) {
  if (argc != 3) {
    std::cerr << "Introduzca un nombre de dos archivos con espacios "
              << "tanto entre el del comando como el de los archivos." << '\n';
    return 1;
  }

  std::ifstream first_input_file(argv[1]);
  std::ifstream second_input_file(argv[2]);

  if (checkValidInputFiles(first_input_file, second_input_file, argv)) {
    return 2;
  }

  std::vector<int> differences_list = FindDifferenceInFiles(first_input_file, second_input_file);
  PrintDifferences(differences_list, argv);

  first_input_file.close();
  second_input_file.close();

  return 0; // Indicar éxito sin diferencias
}
