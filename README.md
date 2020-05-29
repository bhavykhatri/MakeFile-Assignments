## Key Questions

#### GCC
1. **Why do we need make files?**

 Make files simplifies the building time for big project. Instead of writing long gcc commands for your c/c++ files you write it in make file.

2. **Before, jumping into make file, describe in brief how will you compile a file name hello.c with hello.h as header using gcc?**

  The simplest way to run hello.c is using command ``gcc hello.c``. This will create an executable named a.out which can be run ``./a.out``. If we want to name the executable by our choice, say hello,  then we use ``-o`` option as ``gcc hello.c -o hello``. Note that compiler already look for header file and we doesn't have to provide it explicitly.  

3. **What does -O flag do in gcc and how it is different from -o?**

  ``-O`` flag is used for optimization where compiler tries to decrease a great deal of compilation time whereas -o is simply used for naming the output executables.

4. **Please also explain other commonly used flag options in gcc?**

  ``-g``: This flag allow us to use the debugger gdb.
  ``-Og``: This flag optimizes debugging experience
  Another common flag is the ``-std=gnu99`` option, which tells gcc to use the "gnu c version of the 1999 c standard."
