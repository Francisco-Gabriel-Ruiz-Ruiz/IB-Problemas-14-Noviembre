/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @author Francisco Gabriel Ruiz Ruiz
  * @date Nov 13 2023
  * @brief The main program reads two user sequences and prints which one
  *        'alphabetically' precedes the other.
  * @bug There are no known bugs
  * @see Hoja 3 Funciones ULL
  *      (Exercise S10)
  * @contact alu0101618586@ull.edu.es
  */

#include <iostream>
#include <string>
#include "s10-alphabetical_precedence.h"

/**
  * @brief The function checks whether the first word inputted by the user
  *        precedes the other alphabetically.
  * @param first_word The first user inputted word.
  *        second_word The other user inputted word.
  * @return The function returns whether the first word is alphabetically
  *         speaking first through a boolean, or if they are equal.
  */
bool FirstWordIsAlphabeticallyFirst(const std::string& first_word, const std::string& second_word) {
  std::size_t max_word_size{std::max(first_word.size(), second_word.size())};
  for (std::size_t letter_pos{0}; letter_pos < max_word_size; ++letter_pos) {
  if (first_word[letter_pos] < second_word[letter_pos]) {
      return true;
    } else {
      if (first_word[letter_pos] > second_word[letter_pos]) {
        return false;
      } else {
        continue;
      }   
    }
  }
    return (first_word.size() >= second_word.size());
}

/**
  * @brief The function prints the word that alphabetically precedes the other.
  * @param first_word The first user inputted word.
  *        second_word The other user inputted word.
  */
void PrintWordsWithAlphabeticalPrecedence(const std::string& first_word, const std::string& second_word) {
  if (FirstWordIsAlphabeticallyFirst(first_word, second_word)) {
    std::cout << first_word << '\n';
  } else {
    std::cout << second_word << '\n';
  }
}
