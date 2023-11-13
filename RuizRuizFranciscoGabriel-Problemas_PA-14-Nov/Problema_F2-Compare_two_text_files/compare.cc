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

/**
  * @brief The function checks that both files are readable. If they are not,
  *        it specifies which file is the one causing issues.
  * @param first_input_file The first file indicated by the user.
  *        second_input_file The second file indicated by the user.
  *        argv The array that contains the file names.
  * @return If any file gives any error when trying to be opened, it returns
  *         a boolean false value. If it is not the case, it returns a
  *         boolean true value.
  */
bool checkValidInputFiles(std::ifstream& first_input_file, std::ifstream& second_input_file, char* argv[]) {
  if (!first_input_file.is_open() && !second_input_file.is_open()) {
    std::cerr << "Los archivos " << argv[1] << " y " << argv[2] << " no se pudieron abrir para leerlos. ¿Ha introducido correctamente los nombres?" << '\n'
              << "Debe introducir los nombres con un espacio de por medio tanto entre el comando como el de los archivos." << '\n';
    return true;
  } else if (!first_input_file.is_open()) {
    std::cerr << "El archivo " << argv[1] << " no se puede abrir para leerlo. ¿Ha introducido correctamente el nombre?" << '\n'
              << "Debe introducir los nombres con un espacio de por medio tanto entre el comando como el de los archivos." << '\n';
    return true;
  } else if (!second_input_file.is_open()) {
    std::cerr << "El archivo " << argv[2] << " no se puede abrir para leerlo. ¿Ha introducido correctamente el nombre?" << '\n'
              << "Debe introducir los nombres con un espacio de por medio tanto entre el comando como el de los archivos." << '\n';
    return true;
  }
  return false;
}

/**
  * @brief The function extracts each of the file's lines one by one and
  *        compares them simultaneously. It stores the line numbers where
  *        it finds the differences in a vector.
  * @param first_input_file The first file indicated by the user.
  *        second_input_file The second file indicated by the user.
  * @return The function returns the vector where it stored the line numbers
  *         where it found the differences.
  */
std::vector<int> FindDifferenceInFiles(std::ifstream& first_file, std::ifstream& second_file) {
  std::vector<int> difference_list;
  std::string single_line_file1;
  std::string single_line_file2;
  int line_number = 1;
  while (std::getline(first_file, single_line_file1) && std::getline(second_file, single_line_file2)) {
    if (single_line_file1 != single_line_file2) {
      difference_list.emplace_back(line_number);
    }
    line_number++;
  }
  return difference_list;
}

/**
  * @brief The function prints the line numbers where the program previously
  *        differences between the two files.
  * @param differences_list The vector where the program stored the line
  *                         numbers that indicate the difference.
  *        argv The array that contains the user file names the program has
  *             compared.
  */
void PrintDifferences(const std::vector<int>& differences_list, char* argv[]) {
  if (differences_list.empty()) {
    std::cout << argv[1] << " y " << argv[2] << " son iguales" << '\n';
  } else {
    std::cout << "Las líneas ";
    for (size_t counter = 0; counter < differences_list.size(); ++counter) {
      std::cout << differences_list[counter];
      if (counter + 1 != differences_list.size()) {
        std::cout << ", ";
      }
    }
    std::cout << " de " << argv[1] << " y " << argv[2] << " son diferentes" << '\n';
  }
}
