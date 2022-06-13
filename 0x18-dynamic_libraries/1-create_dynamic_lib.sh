#!/bin/bash
$dir=$(dirname $(realpath $0))
gcc -Wall -pedantic -Werror -Wextra --shared -o $dir/liball.so $dir/*.c 
