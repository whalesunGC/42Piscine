#! /bin/sh

#display list of groups for $FT_USER
id -nG $FT_USER | sed -e 's/ /,/g' | tr -d '\n'
