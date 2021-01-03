#!/bin/bash
#
# This is a shell script.
# The first line actually is important --- leave it alone!
# OTHERWISE, comments start with '#' like in Python.
#
# Each other line is run as if you typed it into the
# console or shell windows.  So, you can add a bunch of
# commands in here, and have them all run for you.
#
# If you have multiple C++ programs, you can just add all
# of the commands, and run them on every test!

# This means "stop the script on any error"
set -e

# "rm" means "remove".  It deletes a file.
#rm c -f
# Next, we compile the command
#clang++ -o hw3.345 HW3/3,4,5/c.cpp
# Finally, we run it.
#./hw3.345

rm -f test.345
clang++ -o test.345 HW3/345/test345.cpp HW3/345/geometry.cpp
./test.345

rm -f piglatin
clang++ -o piglatin HW3/U6.cpp
./piglatin < HW3/piglatintest.txt

rm -f hw4u2.*
clang++ -o hw4u2.1 HW4/U2/2.1.cpp
./hw4u2.1
clang++ -o hw4u2.2 HW4/U2/2.2.cpp
./hw4u2.2


rm -f hw4u4.*
clang++ -o hw4u4.1 HW4/U4/4.cpp
./hw4u4.1

