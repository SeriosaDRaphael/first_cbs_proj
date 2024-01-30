#!/bin/bash
directory=inquirer/src
cpp_files=$(find "$directory" -type f -name "*.cpp")
g++ -o inquirer/bin/main $cpp_files
