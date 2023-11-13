/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @author Francisco Gabriel Ruiz Ruiz
  * @date Nov 13 2023
  * @brief This is the header file of the alphabetical precedence programs.
  * @bug There are no known bugs
  * @see Hoja 3 Funciones ULL
  *      (Exercise S10)
  * @contact alu0101618586@ull.edu.es
  */

#ifndef ALPHABETICAL_PRECEDENCE_H
#define ALPHABETICAL_PRECEDENCE_H

#include <string>

bool FirstWordIsAlphabeticallyFirst(const std::string& first_word, const std::string& second_word);
void PrintWordsWithAlphabeticalPrecedence(const std::string& first_word, const std::string& second_word);

#endif
