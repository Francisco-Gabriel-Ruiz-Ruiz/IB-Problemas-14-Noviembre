/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @author Francisco Gabriel Ruiz Ruiz
  * @date Nov 13 2023
  * @brief The main program tells if a year is or is not a leap year.
  * @bug There are no known bugs
  * @see Hoja 3 Funciones ULL
  *      (Exercise N4)
  */

#include <iostream>
#include "n4-leap_year.h"

/**
  * @brief The function computes through a series of fixed calculations whether
  *        the user inputted year is leap or not.
  * @param user_year The user inputted year.
  * @return The function returns whether the user inputted year is leap or not
  *         through a boolean.
  */
bool IsLeapYear(int user_year) {
  if ((user_year % 4 == 0) && (user_year % 100 != 0)) {
    return true;
  } else {
    if ((user_year % 100 == 0) && ((user_year / 100) % 4 == 0)) {
      return true;
    } else {
      return false;
    }
  }
}

/**
  * @brief The function prints whether the user inputted year is leap nor not.
  * @param user_year The user inputted year.
  */
void PrintLeapYear(int user_year) {
  if (IsLeapYear(user_year)) {
    std::cout << "El año que ha introducido es bisiesto." << '\n';
  } else {
    std::cout << "El año que ha introducido no es bisiesto." << '\n';
  }
}
