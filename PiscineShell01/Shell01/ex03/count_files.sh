#! /bin/sh

#find files and directories in current and subdirectories including the starting directory.
find . -type f,d | wc -l
