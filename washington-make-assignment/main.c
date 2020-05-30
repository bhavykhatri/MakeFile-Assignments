/*
 * main.c - demo/test program for speak and shout functions
 * CSE 374 demo  HP
 */

#include "speak.h"
#include "shout.h"

/* Say HELLO and goodbye */
int main(int argc, char* argv[]) {
  shout("hello");
  speak("goodbye");
  return 0;
}
