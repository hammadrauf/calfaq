# CALFAQ Menu Wrapper

## About this Project
This project is simply a wrapper for the various CalFAQ source code functions. It can
also serve as a base "CMakeLists.txt" based build project. It may be compiled using CMake 
in Windows or  Linux.

CALFAQ Web Page: [https://www.tondering.dk/claus/calendar.html](https://www.tondering.dk/claus/calendar.html)
CALFAQ source-code Obtained from: [https://www.tondering.dk/dl.php?file=calfaq.zip](https://www.tondering.dk/dl.php?file=calfaq.zip)


## Compiling Instructions
Install CMake and all other required compilers and tools.
Then use:
'''
wsl01@ABC:~/Source/calfaq$ cmake -B ./output
-- The C compiler identification is GNU 11.4.0
-- The CXX compiler identification is GNU 11.4.0
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Check for working C compiler: /usr/bin/cc - skipped
-- Detecting C compile features
-- Detecting C compile features - done
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: /usr/bin/c++ - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Configuring done
-- Generating done
-- Build files have been written to: /home/wsl01/Source/calfaq/output

wsl01@ABC:~/Source/calfaq$ cmake --build ./output
[ 33%] Building CXX object CMakeFiles/calApp.dir/Main.cpp.o
[ 66%] Building CXX object CMakeFiles/calApp.dir/calfaq.cpp.o
[100%] Linking CXX executable calApp
[100%] Built target calApp

wsl01@ABC:~/Source/calfaq$ output/calApp
Hello Calendar World!



                        Choose A Calendar Function
                        ==========================

        1.      Leap Year
        9.      Exit

Enter a number from 1 to 9
9
wsl01@ABC:~/Source/calfaq$
'''


## CALFAQ Readme

CALFAQ version 1.3, 17 November 2021
====================================

COPYRIGHT
---------
  These functions are Copyright (c) 2021 by Claus Tondering
  (claus@tondering.dk).

LICENSE
-------
  The code is distributed under the Boost Software License, which says:

    Boost Software License - Version 1.0 - August 17th, 2003

    Permission is hereby granted, free of charge, to any person or
    organization obtaining a copy of the software and accompanying
    documentation covered by this license (the "Software") to use, reproduce,
    display, distribute, execute, and transmit the Software, and to prepare
    derivative works of the Software, and to permit third-parties to whom the
    Software is furnished to do so, all subject to the following:

    The copyright notices in the Software and this entire statement, including
    the above license grant, this restriction and the following disclaimer,
    must be included in all copies of the Software, in whole or in part, and
    all derivative works of the Software, unless such copies or derivative
    works are solely in the form of machine-executable object code generated
    by a source language processor.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
    SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
    FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR
    OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE
    USE OR OTHER DEALINGS IN THE SOFTWARE.

DESCRIPTION
-----------

  These functions are an implementation in the C language of the formulas
  presented in the Calendar FAQ at
  http://www.tondering.dk/claus/calendar.html.

  The documentation of each function is found in the .c and .h files.

  The implementation follows the formulas mentioned in the FAQ quite closely.
  The focus of the implementation is on simplicity and clarity. For this
  reason, no complex data structures or classes are used, nor has any attempt
  been made to optimize the code. Also, no verification of the input
  parameters is performed (except in the function simple_gregorian_easter).

  All numbers (including Julian Day Numbers which currently have values of
  almost 2,500,000) are assumed to be representable as variables of type
  'int'.

