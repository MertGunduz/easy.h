/**
 * @file easy.h
 * @brief easy.h is a text-based app development C framework, it provides an easy programming interface for developers by shortening/abstracting C language.
 *
 * This framework simplifies programming by abstracting and shortening basic functions, making it easier to create text-based applications. \n
 * This file is the main header file for easyC.h, it includes all the macro definitions, function declarations, loops, conditionals, and basic data structures. \n \n
 *
 * \ref MainFunctionStartMacros \n
 * \ref MainFunctionEndMacros
 *
 * @author Mehmet Mert Gunduz (merttgg@gmail.com)
 * @date 2024-05-08
 * @version 0.1
 *
 * @see https://github.com/MertGunduz/easyC/lib/easyC.h for more information about the easyC.h header file.
*/

#ifndef EASY_H
#define EASY_H

/**
 * @defgroup MainFunctionStartMacros Main Function Start Macros
 * @brief Macros to simplify the creation of main function in different scenarios.
 *
 * These macros are intended to provide easy and readable shortcuts to define
 * standard main function starting prototypes used in C programs.
 * @{
 */

#define MAIN_VOID_START int main(void) {
#define MAIN_PARAMETERED_START int main(int argc, char *argv[]) {

/** @} */ // End of MainFunctionStartMacros 

/**
 * @defgroup MainFunctionEndMacros Main Function End Macros
 * @brief Macros to simplify the finish of main function in different scenarios.
 *
 * These macros are intended to provide easy and readable shortcuts to define
 * standard main function ending prototypes used in C programs.
 * @{
 */

#define MAIN_END return 0; } ///< Finishes the main function, also returns 0.

/** @} */ // End of MainFunctionEndMacros 

#endif /* EASY_H */