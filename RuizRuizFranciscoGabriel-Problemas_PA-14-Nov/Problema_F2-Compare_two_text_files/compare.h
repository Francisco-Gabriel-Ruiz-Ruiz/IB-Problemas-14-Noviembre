/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @author Francisco Gabriel Ruiz Ruiz
  * @date Nov 13 2023
  * @brief This is the header file for the compare programs.
  * @bug There are no known bugs
  * @see Hoja 3 Funciones ULL
  *      (Exercise F2)
  * @contact alu0101618586@ull.edu.es
  */

#ifndef COMPARE_H
#define COMPARE_H

#include <fstream>
#include <string>
#include <vector>

bool checkValidInputFiles(std::ifstream& first_input_file, std::ifstream& second_input_file, char* argv[]);
std::vector<int> FindDifferenceInFiles(std::ifstream& first_file, std::ifstream& second_file);
void PrintDifferences(const std::vector<int>& differences_list, char* argv[]);

#endif
