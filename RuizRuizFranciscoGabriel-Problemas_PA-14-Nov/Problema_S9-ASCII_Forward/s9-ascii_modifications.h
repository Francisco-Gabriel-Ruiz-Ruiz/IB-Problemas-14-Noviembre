/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @author Francisco Gabriel Ruiz Ruiz
  * @date Nov 13 2023
  * @brief This is the header file of s9-ascii_modifications-main.cc
  * @bug There are no known bugs
  * @see Hoja 3 Funciones ULL
  *      (Exercise S9)
  * @contact alu0101618586@ull.edu.es
  */

#ifndef ASCII_MODIFICATIONS_H
#define ASCII_MODIFICATIONS_H

#include <string>

std::string CalculateOneMoreString(const std::string& user_string);
std::string CalculateOneLessString(const std::string& user_string);
void PrintOneMoreString(const std::string& one_more_string);
void PrintOneLessString(std::string one_less_string);
void PrintFragmentedOriginalString(std::string user_string);

#endif
