/*
 * speak.c - implementation of routine to write messages to stdout
 * CSE 374 demo  HP
 */

#include <stdio.h>
#include "speak.h"

/* Write message m to stdout followed by a newline */
void speak(char m[]) {
  printf("%s\n", m);
}
