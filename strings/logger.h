#ifndef LOGGER_H
#define LOGGER_H

#include <stdio.h>

/* Colors */
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define RESET   "\033[0m"

/* Logger */
#define ERROR(...) \
    fprintf(stderr, RED "[ERROR] " __VA_ARGS__ RESET)

#define WARNING(...) \
    fprintf(stderr, YELLOW "[WARNING] " __VA_ARGS__ RESET)

#define INFO(...) \
    fprintf(stdout, BLUE "[INFO] " __VA_ARGS__ RESET)

#define SUCCESS(...) \
    fprintf(stdout, GREEN "[SUCCESS] " __VA_ARGS__ RESET)

#endif
