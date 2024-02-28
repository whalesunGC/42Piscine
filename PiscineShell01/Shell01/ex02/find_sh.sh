#print all files that end with .sh 
#in current directory and all sub-directories
find . -name '*.sh' -exec basename {} .sh \;
